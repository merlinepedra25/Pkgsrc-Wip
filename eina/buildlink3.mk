# $NetBSD: buildlink3.mk,v 1.1 2008/10/29 22:35:58 yazzy Exp $

BUILDLINK_DEPTH:=	${BUILDLINK_DEPTH}+
EINA_BUILDLINK3_MK:=	${EINA_BUILDLINK3_MK}+

.if ${BUILDLINK_DEPTH} == "+"
BUILDLINK_DEPENDS+=	eina
.endif

BUILDLINK_PACKAGES:=	${BUILDLINK_PACKAGES:Neina}
BUILDLINK_PACKAGES+=	eina
BUILDLINK_ORDER:=	${BUILDLINK_ORDER} ${BUILDLINK_DEPTH}eina

.if ${EINA_BUILDLINK3_MK} == "+"
BUILDLINK_API_DEPENDS.eina+=	eina>=0.9.0.050nb1
BUILDLINK_PKGSRCDIR.eina?=	../../wip/eina
.endif	# EINA_BUILDLINK3_MK

.include "../../wip/eina/buildlink3.mk"

BUILDLINK_DEPTH:=	${BUILDLINK_DEPTH:S/+$//}
