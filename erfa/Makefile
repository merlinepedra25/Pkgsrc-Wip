# $NetBSD: Makefile,v 1.4 2021/01/07 21:42:50 wiz Exp $

DISTNAME=	erfa-2.0.0
CATEGORIES=	math
MASTER_SITES=	${MASTER_SITE_GITHUB:=liberfa/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/liberfa/erfa
COMMENT=	Essential Routines for Fundamental Astronomy
LICENSE=	modified-bsd

USE_TOOLS+=	pkg-config

PKGCONFIG_OVERRIDE+=	erfa.pc.in

USE_LIBTOOL=	yes

GNU_CONFIGURE=	yes

AUTOCONF_REQD=	2.50
AUTOMAKE_REQD=	1.7.1
USE_TOOLS+=	aclocal
USE_TOOLS+=	autoconf
USE_TOOLS+=	autoheader
USE_TOOLS+=	automake

pre-configure:
	set -e; cd ${WRKSRC}; \
	./bootstrap.sh; \
	aclocal; autoheader; automake -a --foreign -i; autoconf

.include "../../mk/bsd.pkg.mk"
