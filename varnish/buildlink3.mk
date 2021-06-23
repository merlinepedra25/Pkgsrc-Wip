# $NetBSD$

BUILDLINK_TREE+=	varnish

.if !defined(VARNISH_BUILDLINK3_MK)
VARNISH_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.varnish+=	varnish>=6.6.0
BUILDLINK_PKGSRCDIR.varnish?=	../../wip/varnish

.endif	# VARNISH_BUILDLINK3_MK

BUILDLINK_TREE+=	-varnish
