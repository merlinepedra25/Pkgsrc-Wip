# $NetBSD$

DISTNAME=	MoonlightSrc-4.1.0
PKGNAME=	moonlight-qt-4.1.0
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=moonlight-stream/}
GITHUB_RELEASE=	v${PKGVERSION_NOREV}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://moonlight-stream.org/
COMMENT=	GameStream client
LICENSE=	gnu-gpl-v3

USE_LANGUAGES=	c c++

WRKSRC=		${WRKDIR}/${DISTNAME}

# Work around the fact that the distfile is a tarbomb
EXTRACT_DIR=	${WRKSRC}

QMAKE_ARGS+=	moonlight-qt.pro
QMAKE_ARGS+=	PREFIX=${PREFIX}

BUILD_MAKE_FLAGS+=	debug
INSTALL_MAKE_FLAGS+=	INSTALL_ROOT=${DESTDIR}

pre-extract:
	${MKDIR} ${WRKSRC}

do-configure:
	cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} ${QTDIR}/bin/qmake ${QMAKE_ARGS}

.include "../../devel/SDL2/buildlink3.mk"
.include "../../fonts/SDL2_ttf/buildlink3.mk"
.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../graphics/freeglut/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../multimedia/ffmpeg4/buildlink3.mk"
.include "../../x11/qt5-qtquickcontrols2/buildlink3.mk"
.include "../../x11/qt5-qtsvg/buildlink3.mk"
.include "../../x11/qt5-qttools/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
