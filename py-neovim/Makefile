# $NetBSD: Makefile,v 1.5 2015/08/10 22:59:31 jonthn Exp $

DISTNAME=	pynvim-0.4.3
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/pynvim/neovim/}
CATEGORIES=	devel editors
MASTER_SITES=	${MASTER_SITE_PYPI:=p/pynvim/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/neovim/pynvim
COMMENT=	Python client to Neovim
LICENSE=	apache-2.0

DEPENDS+=	${PYPKGPREFIX}-msgpack>=0.5.0:../../devel/py-msgpack
TEST_DEPENDS+=	${PYPKGPREFIX}-test-runner-[0-9]*:../../devel/py-test-runner

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
