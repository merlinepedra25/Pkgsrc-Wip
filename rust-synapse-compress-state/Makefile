# $NetBSD$

DISTNAME=	rust-synapse-compress-state-0.1.3
CATEGORIES=	chat
MASTER_SITES=	${MASTER_SITE_GITHUB:=matrix-org/}

MAINTAINER=	gdt@NetBSD.org
HOMEPAGE=	https://github.com/matrix-org/rust-synapse-compress-state/
COMMENT=	Tool to clean up matrix-synapse PostgreSQL databases
LICENSE=	apache-2.0

CARGO_CRATE_DEPENDS+=	aho-corasick-0.7.18
CARGO_CRATE_DEPENDS+=	anyhow-1.0.57
CARGO_CRATE_DEPENDS+=	arc-swap-1.5.0
CARGO_CRATE_DEPENDS+=	async-trait-0.1.56
CARGO_CRATE_DEPENDS+=	atty-0.2.14
CARGO_CRATE_DEPENDS+=	autocfg-1.1.0
CARGO_CRATE_DEPENDS+=	base64-0.13.0
CARGO_CRATE_DEPENDS+=	bitflags-1.3.2
CARGO_CRATE_DEPENDS+=	block-buffer-0.10.2
CARGO_CRATE_DEPENDS+=	byteorder-1.4.3
CARGO_CRATE_DEPENDS+=	bytes-1.1.0
CARGO_CRATE_DEPENDS+=	cc-1.0.73
CARGO_CRATE_DEPENDS+=	cfg-if-1.0.0
CARGO_CRATE_DEPENDS+=	clap-3.1.18
CARGO_CRATE_DEPENDS+=	clap_lex-0.2.0
CARGO_CRATE_DEPENDS+=	console-0.15.0
CARGO_CRATE_DEPENDS+=	cpufeatures-0.2.2
CARGO_CRATE_DEPENDS+=	crossbeam-channel-0.5.4
CARGO_CRATE_DEPENDS+=	crossbeam-deque-0.8.1
CARGO_CRATE_DEPENDS+=	crossbeam-epoch-0.9.8
CARGO_CRATE_DEPENDS+=	crossbeam-utils-0.8.8
CARGO_CRATE_DEPENDS+=	crypto-common-0.1.3
CARGO_CRATE_DEPENDS+=	digest-0.10.3
CARGO_CRATE_DEPENDS+=	either-1.6.1
CARGO_CRATE_DEPENDS+=	encode_unicode-0.3.6
CARGO_CRATE_DEPENDS+=	env_logger-0.9.0
CARGO_CRATE_DEPENDS+=	fallible-iterator-0.2.0
CARGO_CRATE_DEPENDS+=	foreign-types-0.3.2
CARGO_CRATE_DEPENDS+=	foreign-types-shared-0.1.1
CARGO_CRATE_DEPENDS+=	fs_extra-1.2.0
CARGO_CRATE_DEPENDS+=	futures-0.3.21
CARGO_CRATE_DEPENDS+=	futures-channel-0.3.21
CARGO_CRATE_DEPENDS+=	futures-core-0.3.21
CARGO_CRATE_DEPENDS+=	futures-executor-0.3.21
CARGO_CRATE_DEPENDS+=	futures-io-0.3.21
CARGO_CRATE_DEPENDS+=	futures-macro-0.3.21
CARGO_CRATE_DEPENDS+=	futures-sink-0.3.21
CARGO_CRATE_DEPENDS+=	futures-task-0.3.21
CARGO_CRATE_DEPENDS+=	futures-util-0.3.21
CARGO_CRATE_DEPENDS+=	generic-array-0.14.5
CARGO_CRATE_DEPENDS+=	getrandom-0.2.6
CARGO_CRATE_DEPENDS+=	hashbrown-0.11.2
CARGO_CRATE_DEPENDS+=	hermit-abi-0.1.19
CARGO_CRATE_DEPENDS+=	hmac-0.12.1
CARGO_CRATE_DEPENDS+=	humantime-2.1.0
CARGO_CRATE_DEPENDS+=	indexmap-1.8.2
CARGO_CRATE_DEPENDS+=	indicatif-0.16.2
CARGO_CRATE_DEPENDS+=	indoc-1.0.6
CARGO_CRATE_DEPENDS+=	instant-0.1.12
CARGO_CRATE_DEPENDS+=	lazy_static-1.4.0
CARGO_CRATE_DEPENDS+=	libc-0.2.126
CARGO_CRATE_DEPENDS+=	lock_api-0.4.7
CARGO_CRATE_DEPENDS+=	log-0.4.17
CARGO_CRATE_DEPENDS+=	log-panics-2.0.0
CARGO_CRATE_DEPENDS+=	md-5-0.10.1
CARGO_CRATE_DEPENDS+=	memchr-2.5.0
CARGO_CRATE_DEPENDS+=	memoffset-0.6.5
CARGO_CRATE_DEPENDS+=	mio-0.8.3
CARGO_CRATE_DEPENDS+=	new_debug_unreachable-1.0.4
CARGO_CRATE_DEPENDS+=	num_cpus-1.13.1
CARGO_CRATE_DEPENDS+=	number_prefix-0.4.0
CARGO_CRATE_DEPENDS+=	once_cell-1.12.0
CARGO_CRATE_DEPENDS+=	openssl-0.10.40
CARGO_CRATE_DEPENDS+=	openssl-macros-0.1.0
CARGO_CRATE_DEPENDS+=	openssl-sys-0.9.74
CARGO_CRATE_DEPENDS+=	os_str_bytes-6.1.0
CARGO_CRATE_DEPENDS+=	parking_lot-0.11.2
CARGO_CRATE_DEPENDS+=	parking_lot-0.12.1
CARGO_CRATE_DEPENDS+=	parking_lot_core-0.8.5
CARGO_CRATE_DEPENDS+=	parking_lot_core-0.9.3
CARGO_CRATE_DEPENDS+=	percent-encoding-2.1.0
CARGO_CRATE_DEPENDS+=	phf-0.10.1
CARGO_CRATE_DEPENDS+=	phf_shared-0.10.0
CARGO_CRATE_DEPENDS+=	pin-project-lite-0.2.9
CARGO_CRATE_DEPENDS+=	pin-utils-0.1.0
CARGO_CRATE_DEPENDS+=	pkg-config-0.3.25
CARGO_CRATE_DEPENDS+=	postgres-0.19.3
CARGO_CRATE_DEPENDS+=	postgres-openssl-0.5.0
CARGO_CRATE_DEPENDS+=	postgres-protocol-0.6.4
CARGO_CRATE_DEPENDS+=	postgres-types-0.2.3
CARGO_CRATE_DEPENDS+=	ppv-lite86-0.2.16
CARGO_CRATE_DEPENDS+=	precomputed-hash-0.1.1
CARGO_CRATE_DEPENDS+=	proc-macro2-1.0.39
CARGO_CRATE_DEPENDS+=	pyo3-0.16.5
CARGO_CRATE_DEPENDS+=	pyo3-build-config-0.16.5
CARGO_CRATE_DEPENDS+=	pyo3-ffi-0.16.5
CARGO_CRATE_DEPENDS+=	pyo3-log-0.6.0
CARGO_CRATE_DEPENDS+=	pyo3-macros-0.16.5
CARGO_CRATE_DEPENDS+=	pyo3-macros-backend-0.16.5
CARGO_CRATE_DEPENDS+=	quote-1.0.18
CARGO_CRATE_DEPENDS+=	rand-0.8.5
CARGO_CRATE_DEPENDS+=	rand_chacha-0.3.1
CARGO_CRATE_DEPENDS+=	rand_core-0.6.3
CARGO_CRATE_DEPENDS+=	rayon-1.5.3
CARGO_CRATE_DEPENDS+=	rayon-core-1.9.3
CARGO_CRATE_DEPENDS+=	redox_syscall-0.2.13
CARGO_CRATE_DEPENDS+=	regex-1.5.6
CARGO_CRATE_DEPENDS+=	regex-syntax-0.6.26
CARGO_CRATE_DEPENDS+=	scopeguard-1.1.0
CARGO_CRATE_DEPENDS+=	serde-1.0.137
CARGO_CRATE_DEPENDS+=	serial_test-0.5.1
CARGO_CRATE_DEPENDS+=	serial_test_derive-0.5.1
CARGO_CRATE_DEPENDS+=	sha2-0.10.2
CARGO_CRATE_DEPENDS+=	siphasher-0.3.10
CARGO_CRATE_DEPENDS+=	slab-0.4.6
CARGO_CRATE_DEPENDS+=	smallvec-1.8.0
CARGO_CRATE_DEPENDS+=	socket2-0.4.4
#CARGO_CRATE_DEPENDS+=	state-map-0.1.0
CARGO_CRATE_DEPENDS+=	string_cache-0.8.4
CARGO_CRATE_DEPENDS+=	stringprep-0.1.2
CARGO_CRATE_DEPENDS+=	strsim-0.10.0
CARGO_CRATE_DEPENDS+=	subtle-2.4.1
CARGO_CRATE_DEPENDS+=	syn-1.0.96
CARGO_CRATE_DEPENDS+=	target-lexicon-0.12.4
CARGO_CRATE_DEPENDS+=	termcolor-1.1.3
CARGO_CRATE_DEPENDS+=	terminal_size-0.1.17
CARGO_CRATE_DEPENDS+=	textwrap-0.15.0
CARGO_CRATE_DEPENDS+=	tikv-jemalloc-sys-0.5.0+5.3.0
CARGO_CRATE_DEPENDS+=	tikv-jemallocator-0.5.0
CARGO_CRATE_DEPENDS+=	tinyvec-1.6.0
CARGO_CRATE_DEPENDS+=	tinyvec_macros-0.1.0
CARGO_CRATE_DEPENDS+=	tokio-1.19.1
CARGO_CRATE_DEPENDS+=	tokio-openssl-0.6.3
CARGO_CRATE_DEPENDS+=	tokio-postgres-0.7.6
CARGO_CRATE_DEPENDS+=	tokio-util-0.7.3
CARGO_CRATE_DEPENDS+=	tracing-0.1.34
CARGO_CRATE_DEPENDS+=	tracing-core-0.1.26
CARGO_CRATE_DEPENDS+=	typenum-1.15.0
CARGO_CRATE_DEPENDS+=	unicode-bidi-0.3.8
CARGO_CRATE_DEPENDS+=	unicode-ident-1.0.0
CARGO_CRATE_DEPENDS+=	unicode-normalization-0.1.19
CARGO_CRATE_DEPENDS+=	unindent-0.1.9
CARGO_CRATE_DEPENDS+=	vcpkg-0.2.15
CARGO_CRATE_DEPENDS+=	version_check-0.9.4
CARGO_CRATE_DEPENDS+=	wasi-0.10.2+wasi-snapshot-preview1
CARGO_CRATE_DEPENDS+=	wasi-0.11.0+wasi-snapshot-preview1
CARGO_CRATE_DEPENDS+=	winapi-0.3.9
CARGO_CRATE_DEPENDS+=	winapi-i686-pc-windows-gnu-0.4.0
CARGO_CRATE_DEPENDS+=	winapi-util-0.1.5
CARGO_CRATE_DEPENDS+=	winapi-x86_64-pc-windows-gnu-0.4.0
CARGO_CRATE_DEPENDS+=	windows-sys-0.36.1
CARGO_CRATE_DEPENDS+=	windows_aarch64_msvc-0.36.1
CARGO_CRATE_DEPENDS+=	windows_i686_gnu-0.36.1
CARGO_CRATE_DEPENDS+=	windows_i686_msvc-0.36.1
CARGO_CRATE_DEPENDS+=	windows_x86_64_gnu-0.36.1
CARGO_CRATE_DEPENDS+=	windows_x86_64_msvc-0.36.1
USE_LANGUAGES=		# none

.include "../../mk/fetch/github.mk"
.include "../../lang/rust/cargo.mk"
.include "../../mk/bsd.pkg.mk"
