# $NetBSD: Makefile,v 1.1 2015/07/16 14:40:23 kethzer-08 Exp $

DISTNAME=	SQLAlchemy-Searchable-0.9.3
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_PYPI:=S/SQLAlchemy-Searchable/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://files.pythonhosted.org/packages/source/S/SQLAlchemy-Searchable/
COMMENT=	Provides fulltext search capabilities
LICENSE=	modified-bsd # TODO: (see mk/license.mk)

DEPENDS+=	${PYPKGPREFIX}-sqlalchemy-[0-9]*:../../databases/py-sqlalchemy
DEPENDS+=	${PYPKGPREFIX}-sqlalchemy-utils-[0-9]*:../../databases/py-sqlalchemy-utils
DEPENDS+=	${PYPKGPREFIX}-validators-[0-9]*:../../textproc/py-validators

PYTHON_VERSIONED_DEPENDENCIES+=	pyparsing

USE_LANGUAGES=	# none

.include "../../lang/python/egg.mk"
.include "../../lang/python/versioned_dependencies.mk"
.include "../../mk/bsd.pkg.mk"
