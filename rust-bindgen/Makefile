# $NetBSD$

GITHUB_PROJECT=	rust-bindgen
DISTNAME=	v0.50.0
PKGNAME=	${GITHUB_PROJECT}-${DISTNAME}
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=rust-lang/}
DIST_SUBDIR=	${GITHUB_PROJECT}

MAINTAINER=	nikita@NetBSD.org
HOMEPAGE=	https://github.com/rust-lang/rust-bindgen/
COMMENT=	Automatically generate Rust FFI bindings to C (and some C++) libraries
LICENSE=	modified-bsd

WRKSRC=			${WRKDIR}/rust-bindgen-0.50.0
CARGO_CRATE_DEPENDS+=	aho-corasick-0.6.8
CARGO_CRATE_DEPENDS+=	ansi_term-0.11.0
CARGO_CRATE_DEPENDS+=	atty-0.2.11
CARGO_CRATE_DEPENDS+=	backtrace-0.3.11
CARGO_CRATE_DEPENDS+=	backtrace-sys-0.1.28
CARGO_CRATE_DEPENDS+=	bitflags-1.0.4
CARGO_CRATE_DEPENDS+=	byteorder-1.2.7
CARGO_CRATE_DEPENDS+=	cc-1.0.25
CARGO_CRATE_DEPENDS+=	cexpr-0.3.3
CARGO_CRATE_DEPENDS+=	cfg-if-0.1.5
CARGO_CRATE_DEPENDS+=	clang-sys-0.28.0
CARGO_CRATE_DEPENDS+=	clap-2.32.0
CARGO_CRATE_DEPENDS+=	diff-0.1.11
CARGO_CRATE_DEPENDS+=	env_logger-0.6.0
CARGO_CRATE_DEPENDS+=	failure-0.1.5
CARGO_CRATE_DEPENDS+=	fxhash-0.2.1
CARGO_CRATE_DEPENDS+=	glob-0.2.11
CARGO_CRATE_DEPENDS+=	humantime-1.1.1
CARGO_CRATE_DEPENDS+=	lazy_static-1.1.0
CARGO_CRATE_DEPENDS+=	libc-0.2.43
CARGO_CRATE_DEPENDS+=	libloading-0.5.0
CARGO_CRATE_DEPENDS+=	log-0.4.5
CARGO_CRATE_DEPENDS+=	memchr-2.1.0
CARGO_CRATE_DEPENDS+=	nom-4.0.0
CARGO_CRATE_DEPENDS+=	peeking_take_while-0.1.2
CARGO_CRATE_DEPENDS+=	proc-macro2-0.4.19
CARGO_CRATE_DEPENDS+=	quick-error-1.2.2
CARGO_CRATE_DEPENDS+=	quote-0.6.8
CARGO_CRATE_DEPENDS+=	redox_syscall-0.1.40
CARGO_CRATE_DEPENDS+=	redox_termios-0.1.1
CARGO_CRATE_DEPENDS+=	regex-1.0.5
CARGO_CRATE_DEPENDS+=	regex-syntax-0.6.2
CARGO_CRATE_DEPENDS+=	rustc-demangle-0.1.14
CARGO_CRATE_DEPENDS+=	shlex-0.1.1
CARGO_CRATE_DEPENDS+=	strsim-0.7.0
CARGO_CRATE_DEPENDS+=	termcolor-1.0.4
CARGO_CRATE_DEPENDS+=	termion-1.5.1
CARGO_CRATE_DEPENDS+=	textwrap-0.10.0
CARGO_CRATE_DEPENDS+=	thread_local-0.3.6
CARGO_CRATE_DEPENDS+=	ucd-util-0.1.1
CARGO_CRATE_DEPENDS+=	unicode-width-0.1.5
CARGO_CRATE_DEPENDS+=	unicode-xid-0.1.0
CARGO_CRATE_DEPENDS+=	utf8-ranges-1.0.1
CARGO_CRATE_DEPENDS+=	vec_map-0.8.1
CARGO_CRATE_DEPENDS+=	version_check-0.1.4
CARGO_CRATE_DEPENDS+=	which-2.0.1
CARGO_CRATE_DEPENDS+=	winapi-0.3.5
CARGO_CRATE_DEPENDS+=	winapi-i686-pc-windows-gnu-0.4.0
CARGO_CRATE_DEPENDS+=	winapi-util-0.1.1
CARGO_CRATE_DEPENDS+=	winapi-x86_64-pc-windows-gnu-0.4.0
CARGO_CRATE_DEPENDS+=	wincolor-1.0.1
USE_LANGUAGES=		c c++

INSTALLATION_DIRS=	bin

.include "../../wip/mk/cargo-binary.mk"
.include "../../mk/bsd.pkg.mk"
