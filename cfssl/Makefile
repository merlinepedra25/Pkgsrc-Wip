# $NetBSD$

PKGNAME=	cfssl-1.6.1
DISTNAME=	cfssl-${GITHUB_TAG}
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_GITHUB:=cloudflare/}
GITHUB_PROJECT=	cfssl
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	iku.iwasa@gmail.com
HOMEPAGE=	https://cfssl.org/
COMMENT=	CloudFlare\'s PKI toolkit
LICENSE=	mit

EXTRACT_USING=	bsdtar

.include "go-modules.mk"

GO_BUILD_PATTERN=	./cmd/...

CHECK_RELRO_SKIP+=	bin/cfssl
CHECK_RELRO_SKIP+=	bin/cfssl-bundle
CHECK_RELRO_SKIP+=	bin/cfssl-certinfo
CHECK_RELRO_SKIP+=	bin/cfssl-newkey
CHECK_RELRO_SKIP+=	bin/cfssl-scan
CHECK_RELRO_SKIP+=	bin/cfssljson
CHECK_RELRO_SKIP+=	bin/mkbundle
CHECK_RELRO_SKIP+=	bin/multirootca

INSTALLATION_DIRS+=	bin
INSTALLATION_DIRS+=	share/doc/cfssl share/doc/cfssl/api share/doc/cfssl/cmd

do-build:
	${RUN}${_ULIMIT_CMD} cd ${WRKSRC} && ${PKGSRC_SETENV} ${MAKE_ENV} ${GO} install \
		-ldflags '-X github.com/cloudflare/cfssl/cli/version.version=${PKGVERSION_NOREV}' -v ${GO_BUILD_PATTERN}

do-install:
	${RUN} cd ${WRKDIR}/.gopath && [ ! -d bin ] || ${PAX} -rw bin ${DESTDIR}${PREFIX}
	${INSTALL_DATA} ${WRKSRC}/doc/*.txt ${DESTDIR}${PREFIX}/share/doc/cfssl
	${INSTALL_DATA} ${WRKSRC}/doc/*.sample ${DESTDIR}${PREFIX}/share/doc/cfssl
	${INSTALL_DATA} ${WRKSRC}/doc/api/*.txt ${DESTDIR}${PREFIX}/share/doc/cfssl/api
	${INSTALL_DATA} ${WRKSRC}/doc/cmd/*.txt ${DESTDIR}${PREFIX}/share/doc/cfssl/cmd

.include "../../lang/go/go-module.mk"
.include "../../mk/bsd.pkg.mk"
