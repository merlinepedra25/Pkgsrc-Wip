# $NetBSD: Makefile,v 1.3 2022/01/04 20:54:13 wiz Exp $

DISTNAME=	gwcs-0.16.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	math python
MASTER_SITES=	${MASTER_SITE_PYPI:=g/gwcs/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://gwcs.readthedocs.io/en/latest/
COMMENT=	Generalized World Coordinate System
LICENSE=	modified-bsd

PYTHON_VERSIONS_INCOMPATIBLE=	27

DEPENDS+=	${PYPKGPREFIX}-scipy>=1.6:../../math/py-scipy
DEPENDS+=	${PYPKGPREFIX}-astropy>=5.0:../../wip/py-astropy
DEPENDS+=	${PYPKGPREFIX}-asdf>=2.9.2:../../wip/py-asdf

.include "../../math/py-numpy/buildlink3.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
