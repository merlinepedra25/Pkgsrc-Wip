# $NetBSD$

DISTNAME=		sabyenc3-${DISTVERSION}
PKGNAME=		${PYPKGPREFIX}-${DISTNAME}
DISTVERSION=		5.4.2
CATEGORIES=		news
MASTER_SITES=		${MASTER_SITE_GITHUB:=sabnzbd/}
GITHUB_PROJECT=		sabyenc
GITHUB_TAG=		v${DISTVERSION}

MAINTAINER=	rhialto@NetBSD.org
HOMEPAGE=	https://sabnzbd.org/
COMMENT=	yEnc decoding library
LICENSE=	gnu-gpl-v2 AND gnu-gpl-v3 AND modified-bsd AND mit

USE_LANGUAGES+=	c c++

PYTHON_VERSIONS_INCOMPATIBLE=	27

.include "../../lang/python/egg.mk"
#.include "../../lang/python/extension.mk"
.include "../../mk/bsd.pkg.mk"
