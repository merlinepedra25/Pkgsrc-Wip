# $NetBSD: Makefile,v 1.6 2013/03/19 01:22:55 bubuchka Exp $

CATEGORIES=	devel math parallel
MASTER_SITES=	${MASTER_SITE_R_CRAN:=contrib/}

MAINTAINER=	mishka@NetBSD.org
HOMEPAGE=	https://cran.r-project.org/web/packages/doParallel/index.html
COMMENT=	Foreach parallel adaptor for the parallel package
LICENSE=	gnu-gpl-v2

R_PKGNAME=	doParallel
R_PKGVER=	1.0.16

DEPENDS+=	R-iterators-[0-9]*:../../devel/R-iterators

# Packages suggested but not available: 'caret', 'mlbench'
TEST_DEPENDS+=	R-RUnit-[0-9]*:../../devel/R-RUnit

BUILDLINK_API_DEPENDS.R+=	R>=2.14.0

.include "../../math/R/Makefile.extension"
.include "../../wip/R-foreach/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
