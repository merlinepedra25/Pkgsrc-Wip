# $NetBSD$

PKGNAME=	unit-${LANG}${PHP_VERSION:R:S|.||g}-${UNIT_VERSION}
COMMENT=	PHP module for NGINX Unit

LANG=		php
MODNAME=	${LANG}${PHP_VERSION}

MAINTAINER=	osa@FreeBSD.org

PHP_VERSIONS_ACCEPTED?=	56 73 74 80

.include "../../lang/php/phpversion.mk"

#PHP_BUILD_OPTIONS!=	${RUN} ${PKG_INFO} -Bn php | ${GREP} PKG_OPTIONS
#.if empty(PHP_BUILD_OPTIONS:Mphp-embed)
#BROKEN=		"Requires the php-embed option enabled in PHP."
#.endif

BROKEN=		"Requires the php-embed option enabled in PHP but there is no code to check if this is so."

post-configure:
	${RUN} cd ${WRKSRC} && ${SETENV} ${_CONFIGURE_SCRIPT_ENV}	\
		${CONFIG_SHELL} ${CONFIG_SHELL_FLAGS} 			\
			${CONFIGURE_SCRIPT} ${LANG}			\
				--lib-path=${PREFIX}/lib		\
				--module=${MODNAME}

.include "${PHPPKGSRCDIR}/buildlink3.mk"
.include "../../wip/unit/ext.mk"
.include "../../wip/unit/Makefile.common"
.include "../../mk/bsd.pkg.mk"
