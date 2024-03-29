# $NetBSD: Makefile,v 1.1 2015/02/19 21:21:12 jihbed Exp $

DISTNAME=	nemo-5.2.2
PKGREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_GITHUB:=linuxmint/}
GITHUB_PROJECT=	nemo
GITHUB_TAG=	${PKGVERSION_NOREV}

MAINTAINER=	youri@NetBSD.org
HOMEPAGE=	https://github.com/linuxmint/nemo
COMMENT=	File Manager for Cinnamon
LICENSE=	gnu-gpl-v2

USE_LIBTOOL=		yes
USE_TOOLS+=		pkg-config intltool msgfmt
#MESON_ARGS+=		--buildtype=debug
USE_CMAKE=		yes

#SUBST_CLASSES=		prefix
#SUBST_MESSAGE.prefix=	Fix prefix references
#SUBST_FILES.prefix=	src/nemo-interesting-folder-bar.c
#SUBST_FILES.prefix+=	src/nemo-properties-window.c
#SUBST_STAGE.prefix=	pre-configure
#SUBST_SED.prefix=	-e 's,/usr/share,${PREFIX}/share,g'

DEPENDS+=	${PYPKGPREFIX}-polib-[0-9]*:../../devel/py-polib
DEPENDS+=	gvfs-[0-9]*:../../sysutils/gvfs
BUILD_DEPENDS+=	autoconf-archive-[0-9]*:../../devel/autoconf-archive
BUILD_DEPENDS+=	gettext-m4>=0.14.6:../../devel/gettext-m4
TOOL_DEPENDS+=	gdbus-codegen-[0-9]*:../../devel/gdbus-codegen

REPLACE_PYTHON=	data/merge_action_strings \
		files/usr/share/nemo/actions/myaction.py \
		files/usr/share/nemo/actions/send-by-mail.py \
		install-scripts/meson_install_schemas.py \
		install-scripts/meson_update_icon_cache.py \
		install-scripts/meson_update_mime_database.py

# helps build but creates typelib with wrong path! (libcvc/libnemo-private.so instead of path/lib/lib.so)
# check /usr/pkg/share/gir-1.0 for dubious lib paths
MAKE_ENV+=	LD_LIBRARY_PATH=${WRKSRC}/output/libcvc:${WRKSRC}/output/libnemo-private
MAKE_ENV+=	LD_LIBRARY_PATH=${WRKSRC}/output/libcvc:${WRKSRC}/output/libnemo-extension

.include "../../devel/libgsf/buildlink3.mk"
.include "../../devel/meson/build.mk"
.include "../../lang/python/application.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../devel/exempi/buildlink3.mk"
.include "../../devel/gobject-introspection/buildlink3.mk"
.include "../../devel/py-gobject3-common/buildlink3.mk"
.include "../../devel/dconf/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../graphics/libexif/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../sysutils/libnotify/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../textproc/gtk-doc/buildlink3.mk"
.include "../../devel/glib2/schemas.mk"
.include "../../multimedia/ffmpegthumbnailer/buildlink3.mk"
.include "../../sysutils/accountsservice/buildlink3.mk"
.include "../../x11/gtk3/buildlink3.mk"

.include "../../wip/cinnamon-desktop/buildlink3.mk"
.include "../../wip/xapps/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
