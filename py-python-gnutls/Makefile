# $NetBSD: Makefile,v 1.8 2014/12/31 13:58:39 thomasklausner Exp $

DISTNAME=	python-gnutls-2.0.1
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_PYPI:=p/python-gnutls/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://ag-projects.com/
COMMENT=	Python wrapper for the GNUTLS library
LICENSE=	gnu-lgpl-v2

SUBST_CLASSES+=		gnutls
SUBST_FILES.gnutls=	gnutls/library/__init__.py
SUBST_MESSAGE.gnutls=	Fixing gnutls library version.
SUBST_SED.gnutls=	-e 's/26/28/g'
SUBST_SED.gnutls+=	-e "s|/usr/local/lib']|${PREFIX}/lib']|1"
SUBST_STAGE.gnutls=	post-patch

PYTHON_VERSIONS_ACCEPTED=	27 # not yet ported as of 2.0.1

BUILDLINK_API_DEPENDS.gnutls+=	gnutls>=3.1.4
.include "../../security/gnutls/buildlink3.mk"
.include "../../wip/python/distutils.mk"
.include "../../mk/bsd.pkg.mk"
