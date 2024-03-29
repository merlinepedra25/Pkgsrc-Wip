# $NetBSD$

DISTNAME=		avrdude-7.0
CATEGORIES=		cross
# The archive "archive/refs/tags/v7.0.tar.gz" uses a different build system!
MASTER_SITES=		${MASTER_SITE_GITHUB:=avrdudes/}/avrdude/releases/download/v7.0/

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		https://github.com/avrdudes/avrdude/
COMMENT=		Downloader/uploader for Atmel AVR 8-bit RISC microcontrollers
LICENSE=		gnu-gpl-v2

.include "../../mk/bsd.prefs.mk"

GNU_CONFIGURE=		yes
USE_TOOLS+=		autoconf automake autoreconf lex yacc
USE_TOOLS+=		gmake
USE_LIBTOOL=		yes
INFO_FILES=		yes
EGDIR=			${PREFIX}/share/examples/avrdude
CONF_FILES_PERMS=	${EGDIR}/avrdude.conf ${PKG_SYSCONFDIR}/avrdude.conf \
			${REAL_ROOT_USER} ${REAL_ROOT_GROUP} 644

PKG_OPTIONS_VAR=		PKG_OPTIONS.avrdude
PKG_SUPPORTED_OPTIONS=		doc
PKG_SUGGESTED_OPTIONS=		doc

.include "../../mk/bsd.options.mk"

PLIST_VARS+=		doc
.if !empty(PKG_OPTIONS:Mdoc)
PLIST.doc=		yes
TEXINFO_REQD=		4.9
USE_TOOLS+=		texi2html makeinfo
BUILD_DEPENDS+=		dvipsk-[0-9]*:../../print/dvipsk
BUILD_DEPENDS+=		tex-latex-fonts-[0-9]*:../../fonts/tex-latex-fonts
BUILD_DEPENDS+=		tex-pdftex-[0-9]*:../../print/tex-pdftex
# DragonFly has stripped makeinfo in the base - without texi2dvi.
.  if ${OPSYS} == "DragonFly"
BUILD_DEPENDS+=		gtexinfo-[0-9]*:../../devel/gtexinfo
.  endif
CONFIGURE_ARGS+=	--enable-doc
.else
CONFIGURE_ARGS+=	--disable-doc
.endif

CONFIGURE_ARGS+=	--sysconfdir=${PKG_SYSCONFDIR}
CONFIGURE_ENV+=		DEFAULT_SER_PORT=${DEFAULT_SERIAL_DEVICE}
PLIST_SUBST+=		DISTNAME=${DISTNAME}

# The autotools used by this pkg are older than what's in pkgsrc
# currently.  This makes the diffs huge.
pre-configure:
	cd ${WRKSRC} && autoreconf -vif

.include "../../comms/libhidapi/buildlink3.mk"
.include "../../devel/libftdi1/buildlink3.mk"
.include "../../devel/libusb1/buildlink3.mk"
# elf_getshdrstrndx
.include "../../devel/libelf/buildlink3.mk"
.include "../../devel/readline/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
