# $NetBSD: Makefile,v 1.32 2022/03/08 22:32:15 gdt Exp $

# development version towards 2.53.0
DISTNAME=	unison-2.52.60.0
#PKGREVISION=	0
CATEGORIES=	net
MASTER_SITES=	${MASTER_SITE_GITHUB:=bcpierce00/}
GITHUB_TAG=	08dbd399b65b960e7f2ea356555209404d95024a

MAINTAINER=	gdt@NetBSD.org
HOMEPAGE=	https://www.cis.upenn.edu/~bcpierce/unison/
COMMENT=	File-synchronization tool
LICENSE=	gnu-gpl-v3

USE_TOOLS+=	gmake bash
MAKE_FLAGS+=	CFLAGS=""
MAKE_ENV+=	HOME=${WRKDIR:Q}

.include "../../mk/ocaml.mk"

.if (${OCAML_USE_OPT_COMPILER} == "yes")
MAKE_FLAGS+=	NATIVE=true
.else
MAKE_FLAGS+=	NATIVE=false
.endif

# bsd.prefs.mk, included also by options, must be after ocaml to get
# _PKGSRC_MKPIE set correctly.
.include "options.mk"
.include "../../mk/bsd.prefs.mk"

TEST_TARGET=		test

INSTALLATION_DIRS=	bin
INSTALLATION_DIRS+=	${PKGMANDIR}/man1
INSTALLATION_DIRS+=	share/doc/unison

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/unison ${DESTDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/src/CONTRIB ${DESTDIR}${PREFIX}/share/doc/unison
	${INSTALL_MAN} ${WRKSRC}/src/COPYING ${DESTDIR}${PREFIX}/share/doc/unison
	${INSTALL_MAN} ${WRKSRC}/NEWS.md ${DESTDIR}${PREFIX}/share/doc/unison
	${INSTALL_MAN} ${WRKSRC}/src/README ${DESTDIR}${PREFIX}/share/doc/unison
	${INSTALL_MAN} ${WRKSRC}/src/ROADMAP.txt ${DESTDIR}${PREFIX}/share/doc/unison
	${INSTALL_MAN} ${WRKSRC}/src/TODO.txt ${DESTDIR}${PREFIX}/share/doc/unison
	${INSTALL_MAN} ${WRKSRC}/man/unison.1 ${DESTDIR}${PREFIX}/${PKGMANDIR}/man1

.include "../../mk/pthread.buildlink3.mk"
.if defined(PTHREAD_TYPE) && (${PTHREAD_TYPE} != "none")
MAKE_FLAGS+=	THREADS=true
.endif

.include "../../lang/ocaml/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
