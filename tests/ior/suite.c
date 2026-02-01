#include <stic.h>

#include <stdlib.h> /* free() */
#include <string.h> /* strdup() */

#include "../../src/cfg/config.h"

DEFINE_SUITE();

SETUP()
{
	cfg.shell = strdup("/bin/bash");
	cfg.shell_cmd_flag = strdup("-c");
	cfg.slow_fs_list = strdup("");
}

TEARDOWN()
{
	free(cfg.shell_cmd_flag);
	free(cfg.shell);
	free(cfg.slow_fs_list);
}

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab cinoptions-=(0 : */
/* vim: set cinoptions+=t0 filetype=c : */
