# $NetBSD$

DISTNAME=	rtv-1.27.0
CATEGORIES=	www python
MASTER_SITES=	${MASTER_SITE_PYPI:=r/rtv/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/michael-lazar/rtv
COMMENT=	Simple terminal viewer for Reddit (Reddit Terminal Viewer)
LICENSE=	mit

DEPENDS+=	${PYPKGPREFIX}-beautifulsoup4-[0-9]*:../../www/py-beautifulsoup4
DEPENDS+=	${PYPKGPREFIX}-curses-[0-9]*:../../devel/py-curses
DEPENDS+=	${PYPKGPREFIX}-decorator-[0-9]*:../../devel/py-decorator
DEPENDS+=	${PYPKGPREFIX}-kitchen-[0-9]*:../../devel/py-kitchen
DEPENDS+=	${PYPKGPREFIX}-requests>=2.4.0:../../devel/py-requests
DEPENDS+=	${PYPKGPREFIX}-six-[0-9]*:../../lang/py-six

.include "../../lang/python/egg.mk"

.if ${_PYTHON_VERSION} == 27
DEPENDS+=	${PYPKGPREFIX}-mailcap-fix-[0-9]*:../../wip/py-mailcap-fix
.endif

SUBST_CLASSES+=			pkgmandir
SUBST_STAGE.pkgmandir=		pre-configure
SUBST_FILES.pkgmandir=		setup.py
SUBST_MESSAGE.pkgmandir=	Fixing man page installation.
SUBST_SED.pkgmandir=		-e 's,share/man,${PKGMANDIR},'

USE_LANGUAGES=		# none

.include "../../mk/bsd.pkg.mk"
