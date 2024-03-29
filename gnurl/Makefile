# $NetBSD: Makefile,v 1.18 2021/05/24 19:55:14 wiz Exp $

DISTNAME=	gnurl-7.72.0
PKGREVISION=	4
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_GNU:=gnunet/}
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	nikita@NetBSD.org
HOMEPAGE=	https://gnunet.org/en/gnurl.html
COMMENT=	Client that groks URLs (micro fork of curl)
# not completely, the curl license is inspired by mit
LICENSE=	mit

BUILD_DEFS+=	IPV6_READY

USE_TOOLS+=		pkg-config
USE_LIBTOOL=		yes
GNU_CONFIGURE=		yes # make install depends on it
PKGCONFIG_OVERRIDE=	libgnurl.pc.in

.include "../../mk/bsd.prefs.mk"

TEST_MAKE_FLAGS=	-C tests
TEST_TARGET=		test

CONFIGURE_ARGS+=	--without-libssh2
CONFIGURE_ARGS+=	--without-libmetalink
CONFIGURE_ARGS+=	--without-winidn
CONFIGURE_ARGS+=	--without-librtmp
CONFIGURE_ARGS+=	--without-nghttp2
CONFIGURE_ARGS+=	--without-nss
CONFIGURE_ARGS+=	--without-ssl
CONFIGURE_ARGS+=	--without-winssl
CONFIGURE_ARGS+=	--without-darwinssl
CONFIGURE_ARGS+=	--disable-sspi
CONFIGURE_ARGS+=	--disable-ldap
CONFIGURE_ARGS+=	--without-libpsl
CONFIGURE_ARGS+=	--disable-rtsp
CONFIGURE_ARGS+=	--disable-dict
CONFIGURE_ARGS+=	--disable-telnet
CONFIGURE_ARGS+=	--disable-tftp
CONFIGURE_ARGS+=	--disable-pop3
CONFIGURE_ARGS+=	--disable-imap
CONFIGURE_ARGS+=	--disable-smtp
CONFIGURE_ARGS+=	--disable-gopher
CONFIGURE_ARGS+=	--disable-file
CONFIGURE_ARGS+=	--disable-ftp
CONFIGURE_ARGS+=	--disable-smb
CONFIGURE_ARGS+=	--disable-ntlm-wb
CONFIGURE_ARGS+=	--with-gnutls
CONFIGURE_ARGS+=	--with-libidn2
# Fallback to gnutls preferred CA certificates
CONFIGURE_ARGS+=	--without-ca-bundle
CONFIGURE_ARGS+=	--without-ca-path
CONFIGURE_ARGS+=	--with-ca-fallback
# Do not pick up GSS.
# https://bugs.gnunet.org/view.php?id=5610
# CONFIGURE_ARGS+=	--without-gssapi
CONFIGURE_ARGS+=	--disable-valgrind
# We do not want HTTP3 support yet, see release announcement
CONFIGURE_ARGS+=	--without-ngtcp2
CONFIGURE_ARGS+=	--without-nghttp2
CONFIGURE_ARGS+=	--without-nghttp3
CONFIGURE_ARGS+=	--without-quiche

.include "options.mk"

.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../devel/libffi/buildlink3.mk"
.include "../../devel/libidn2/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../security/gnutls/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
