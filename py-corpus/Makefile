# $NetBSD$

DISTNAME=	PyCorpus-0.1
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/Py//tl}
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_PYPI:=P/PyCorpus/}

MAINTAINER=	kamelderouiche@yahoo.com
HOMEPAGE=	http://www.alfanous.org/
COMMENT=	Arabic Quranic Corpus python API
LICENSE=	gnu-gpl-v3

WRKSRC=		${WRKDIR}/PyCorpus-0.1

PYTHON_VERSIONED_DEPENDENCIES+=	pyparsing

USE_LANGUAGES=	# none

.include "../../lang/python/egg.mk"
.include "../../lang/python/versioned_dependencies.mk"
.include "../../mk/bsd.pkg.mk"
