# $NetBSD: Makefile,v 1.6 2015/06/26 22:18:55 othyro Exp $

DISTNAME=	python-application-1.5.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_PYPI:=p/python-application/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://ag-projects.com/
COMMENT=	Basic building blocks for python applications
LICENSE=	gnu-lgpl-v2

DEPENDS+=	${PYPKGPREFIX}-ZopeInterface-[0-9]*:../../devel/py-ZopeInterface

PYTHON_VERSIONS_ACCEPTED=	27 # not yet ported as of 1.4.1

USE_LANGUAGES=	# none

.include "../../wip/python/distutils.mk"
.include "../../mk/bsd.pkg.mk"
