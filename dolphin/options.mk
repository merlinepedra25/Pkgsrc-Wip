# $NetBSD: options.mk,v 1.2 2013/05/08 02:53:13 othyro Exp $

PKG_OPTIONS_VAR=	PKG_OPTIONS.dolphin
PKG_SUPPORTED_OPTIONS=	alsa bluez cg debug ffmpeg glew gtk2 libao openal opengl
PKG_SUPPORTED_OPTIONS+=	portaudio pulseaudio sdl sdl2 sfml+ soil threads xrandr
PKG_SUPPORTED_OPTIONS+=	x11 zlib
PKG_SUGGESTED_OPTIONS+=	ffmpeg glew gtk2 libao openal opengl pulseaudio sdl sdl2
PKG_SUGGESTED_OPTIONS+=	sfml+ threads xrandr x11 zlib

# XXX wxGTK29 (wxUnicode) is not yet supported. Package and test.

.include "../../mk/bsd.options.mk"

.if !empty(PKG_OPTIONS:Malsa)
.include "../../audio/alsa-lib/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mbluez)
.include "../../wip/bluez-libs/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mcg)
.include "../../wip/Cg-compiler/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mdebug)
CMAKE_ARGS+=		-DCMAKE_BUILD_TYPE=Debug
.endif

.if !empty(PKG_OPTIONS:Mffmpeg)
.include "../../multimedia/ffmpeg/buildlink3.mk"
CMAKE_ARGS+=		-DENCODE_FRAMEDUMPS=ON
.else
CMAKE_ARGS+=		-DENCODE_FRAMEDUMPS=OFF
.endif

.if !empty(PKG_OPTIONS:Mglew)
.include "../../graphics/glew/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mgtk2)
.include "../../x11/gtk2/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mlibao)
.include "../../audio/libao/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mopenal)
.include "../../audio/openal/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mopengl)
.include "../../graphics/MesaLib/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mportaudio)
.include "../../audio/portaudio/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mpulseaudio)
.include "../../audio/pulseaudio/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Msdl)
.include "../../devel/SDL/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Msdl2)
.include "../../wip/SDL2/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Msfml+)
.include "../../wip/sfml+/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Msoil)
.include "../../wip/soil/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mthreads)
.include "../../mk/pthread.buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mxrandr)
.include "../../x11/libXrandr/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mx11)
.include "../../x11/libICE/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mzlib)
.include "../../devel/zlib/buildlink3.mk"
.endif
