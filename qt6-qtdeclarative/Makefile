# $NetBSD$

DISTNAME=	qtdeclarative-everywhere-src-${QTVERSION}
PKGNAME=	qt6-qtdeclarative-${QTVERSION}
COMMENT=	Qt6 module for declarative framework
CATEGORIES=	x11

LICENSE=	gnu-lgpl-v3 OR gnu-gpl-v2 OR gnu-gpl-v3

.include "../../wip/qt6-qtbase/Makefile.common"

#Fixme: for some reason this package creates an empty
#${DESTDIR}${QTPREFIX}/lib/cmake/Qt6 directory
post-install:
	${RMDIR} ${DESTDIR}${QTPREFIX}/lib/cmake/Qt6

.include "../../lang/python/tool.mk"
.include "../../wip/qt6-qtbase/buildlink3.mk"
.include "../../wip/qt6-qtshadertools/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
