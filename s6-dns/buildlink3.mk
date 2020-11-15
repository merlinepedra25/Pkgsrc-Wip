# $NetBSD$

BUILDLINK_TREE+=	s6-dns

.if !defined(S6_DNS_BUILDLINK3_MK)
S6_DNS_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.s6-dns+=	s6-dns>=2.3.3.0
BUILDLINK_PKGSRCDIR.s6-dns?=	../../wip/s6-dns
BUILDLINK_DEPMETHOD.s6-dns?=	build
.endif	# S6_DNS_BUILDLINK3_MK

BUILDLINK_TREE+=	-s6-dns
