# $NetBSD: Makefile,v 1.25 2016/01/10 20:01:05 markd Exp $

DISTNAME=	libkgapi-${KAPPSVER}
CATEGORIES=	misc

HOMEPAGE=	https://www.kde.org/
COMMENT=	KDE-based library to access various Google services via their public API
LICENSE=	gnu-lgpl-v2 AND gnu-gpl-v2

.include "../../meta-pkgs/kde/applications.mk"

CFLAGS.NetBSD+=	-D_NETBSD_SOURCE

USE_TOOLS+=	msgmerge

.include "../../devel/kio/buildlink3.mk"
.include "../../time/kcalendarcore/buildlink3.mk"
.include "../../misc/kcontacts/buildlink3.mk"
.include "../../security/cyrus-sasl/buildlink3.mk"
.include "../../x11/qt5-qtwebengine/buildlink3.mk"
.include "../../x11/qt5-qtbase/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
