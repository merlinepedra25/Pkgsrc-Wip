#!/bin/sh
#
# $NetBSD$
#
# PROVIDE: mariadb mysqld
# REQUIRE: DAEMON LOGIN mountall
# KEYWORD: shutdown
#

if [ -f /etc/rc.subr ]
then
	. /etc/rc.subr
fi

name="mariadb"
rcvar=${name}
command="@PREFIX@/sbin/mysqld"
command_args="--pid-file=@VARBASE@/run/mariadb/mariadb.pid"
command_args="${command_args} --user=@MARIADB_USER@"
command_args="${command_args} --datadir=@MARIADB_DATADIR@"
command_args="${command_args} --log-error=@VARBASE@/log/mariadb/error.log &"
extra_commands="initdb"
initdb_cmd="mariadb_initdb"
start_precmd="mariadb_prestart"
pidfile="@VARBASE@/run/mariadb/mariadb.pid"

mariadb_initdb() {
        if [ -f @MARIADB_DATADIR@/mysql/host.frm ]; then
                echo "The MariaDB database has already been initialized."
                echo "Skipping database initialization."
        else
		echo "Initializing MariaDB database system tables."
		sh @PREFIX@/bin/mysql_install_db --force \
			--user=mariadb \
			--datadir=@MARIADB_DATADIR@
		if [ -d @MARIADB_DATADIR@ ]; then
			/usr/sbin/chown -R @MARIADB_USER@:@MARIADB_GROUP@ \
				@MARIADB_DATADIR@
                fi
	fi
}

mariadb_prestart() {
	ulimit -n 4096
}

load_rc_config $name
run_rc_command "$1"
