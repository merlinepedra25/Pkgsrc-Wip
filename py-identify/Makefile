# $NetBSD$

DISTNAME=	identify-2.5.1
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel python
MASTER_SITES=	${MASTER_SITE_PYPI:=i/identify/}

MAINTAINER=	iku.iwasa@gmail.com
HOMEPAGE=	https://github.com/chriskuehl/identify
COMMENT=	File identification library for Python
LICENSE=	mit

USE_LANGUAGES=	# none

post-install:
	cd ${DESTDIR}${PREFIX}/bin && \
	${MV} identify-cli identify-cli-${PYVERSSUFFIX} || ${TRUE}

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
