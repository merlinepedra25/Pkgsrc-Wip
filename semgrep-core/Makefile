# $NetBSD$

DISTNAME=	semgrep-core-0.60.0
PKGREVISION=	0
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=returntocorp/}
GITHUB_PROJECT=	semgrep
GITHUB_TAG=	v${PKGVERSION_NOREV}

GIT_REPO=	https://github.com/returntocorp/semgrep.git
GIT_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/returntocorp/semgrep/
COMMENT=	Lightweight static analysis for many languages
LICENSE=	gnu-lgpl-v2.1

TOOL_DEPENDS+=	git-base-[0-9]*:../../devel/git-base
TOOL_DEPENDS+=	mccs-[0-9]*:../../wip/mccs

UNLIMIT_RESOURCES+=	stacksize # needed by parsexp
USE_LANGUAGES=		c c++
USE_TOOLS+=		gmake pkg-config bash:build
WRKSRC=			${WRKDIR}/semgrep

MAKE_ENV+=	HOMEBREW_SYSTEM=fake
MAKE_ENV+=	OPAMROOT=${WRKSRC}/opam
MAKE_ENV+=	OPAMYES=1

INSTALLATION_DIRS=	bin

do-build:
	${RUN} cd ${WRKSRC} && \
	    ${_ULIMIT_CMD} ${PKGSRC_SETENV} ${MAKE_ENV} opam init --no-setup --disable-sandboxing && \
	    ${_ULIMIT_CMD} ${PKGSRC_SETENV} ${MAKE_ENV} opam update -y && \
	    ${_ULIMIT_CMD} ${PKGSRC_SETENV} ${MAKE_ENV} opam install -y --deps-only ./semgrep-core/src/pfff && \
	    ${_ULIMIT_CMD} ${PKGSRC_SETENV} ${MAKE_ENV} opam install -y --deps-only ./semgrep-core/src/ocaml-tree-sitter-core && \
	    ${_ULIMIT_CMD} ${PKGSRC_SETENV} ${MAKE_ENV} opam install -y --deps-only ./semgrep-core
	${RUN} cd ${WRKSRC}/semgrep-core && \
	    ${_ULIMIT_CMD} ${PKGSRC_SETENV} ${MAKE_ENV} opam exec -- make all && \
	    ${_ULIMIT_CMD} ${PKGSRC_SETENV} ${MAKE_ENV} opam exec -- make install

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/semgrep/semgrep/bin/semgrep-core ${DESTDIR}${PREFIX}/bin/semgrep-core
	${INSTALL_PROGRAM} ${WRKSRC}/semgrep/semgrep/bin/spacegrep ${DESTDIR}${PREFIX}/bin/spacegrep

.include "../../devel/pcre/buildlink3.mk"
BUILDLINK_DEPMETHOD.ocaml=	build
.include "../../lang/ocaml/buildlink3.mk"
BUILDLINK_DEPMETHOD.ocaml-opam=	build
.include "../../misc/ocaml-opam/buildlink3.mk"
.include "../../wip/tree-sitter/buildlink3.mk"
.include "../../wip/mk/git-package.mk"
.include "../../mk/bsd.pkg.mk"
