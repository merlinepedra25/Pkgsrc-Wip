# $NetBSD: Makefile,v 1.25 2016/01/10 20:01:05 markd Exp $

DISTNAME=	oxygen-${PLASMAVER}
CATEGORIES=	graphics

HOMEPAGE=	https://kde.org/plasma-desktop/
COMMENT=	KDE Oxygen style
LICENSE=	gnu-gpl-v2 AND gnu-lgpl-v2.1

.include "../../meta-pkgs/kde/plasma5.mk"

CONFLICTS+=	kde-workspace4-[0-9]*

USE_TOOLS+=	msgmerge pkg-config

.include "../../wip/kdecoration/buildlink3.mk"
.include "../../devel/kcmutils/buildlink3.mk"
.include "../../devel/kwayland/buildlink3.mk"
.include "../../x11/frameworkintegration/buildlink3.mk"
.include "../../x11/qt5-qtbase/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
