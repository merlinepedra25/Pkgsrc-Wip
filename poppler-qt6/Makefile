# $NetBSD$

.include "../../print/poppler/Makefile.common"

PKGNAME=	poppler-qt6-${POPPLER_VERS}
COMMENT=	PDF rendering library (QT6 wrapper)
MAINTAINER=	pkgsrc-users@NetBSD.org

CMAKE_ARGS+=	-DBUILD_GTK_TESTS=OFF
CMAKE_ARGS+=	-DENABLE_GLIB=OFF
CMAKE_ARGS+=	-DENABLE_UTILS=OFF
CMAKE_ARGS+=	-DENABLE_CPP=OFF
CMAKE_ARGS+=	-DENABLE_QT5=OFF
CMAKE_ARGS+=	-DENABLE_QT6=ON
# Don't build libcurl based HTTP support. ## might want to include
CMAKE_ARGS+=	-DENABLE_LIBCURL=OFF

BUILDLINK_API_DEPENDS.poppler+= poppler>=${POPPLER_VERS}
.include "../../print/poppler/buildlink3.mk"

PKGCONFIG_OVERRIDE+=	poppler-qt6.pc.cmake

INSTALLATION_DIRS+=	lib/pkgconfig

BUILD_DIRS=		qt6/src

post-install:
	${INSTALL_DATA} ${WRKSRC}/poppler-qt6.pc ${DESTDIR}${PREFIX}/lib/pkgconfig

.include "../../wip/qt6-qtbase/buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
