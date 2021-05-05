# $NetBSD: buildlink3.mk,v 1.16 2020/08/17 20:17:49 leot Exp $

BUILDLINK_TREE+=	fltk

.if !defined(FLTK_BUILDLINK3_MK)
FLTK_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.fltk+=	fltk>=1.3.0
BUILDLINK_ABI_DEPENDS.fltk?=	fltk>=1.3.5nb1
BUILDLINK_PKGSRCDIR.fltk?=	../../wip/fltk13
BUILDLINK_FILES.fltk+=		include/Fl/*

pkgbase := fltk
.include "../../mk/pkg-build-options.mk"

# For "opengl" option
.if ${PKG_BUILD_OPTIONS.fltk:Mopengl}
.  if ${OPSYS} != "Darwin"
.    include "../../graphics/MesaLib/buildlink3.mk"
.    include "../../graphics/glu/buildlink3.mk"
.  endif
.endif

.if ${OPSYS} != "Darwin"
.  include "../../x11/libXcursor/buildlink3.mk"
.  include "../../x11/libXext/buildlink3.mk"
.  include "../../x11/libXft/buildlink3.mk"
.  include "../../x11/libXinerama/buildlink3.mk"
.endif
.include "../../mk/jpeg.buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.endif # FLTK_BUILDLINK3_MK

BUILDLINK_TREE+=	-fltk
