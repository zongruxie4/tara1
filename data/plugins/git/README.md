## Git

This plugin provides utilities related to Git.

### `:Gclone` command

Clones repository, optionally deriving target directory name from the URL.  On
success, enters the newly cloned worktree.  On failure, shows the error in a
dialog.

**Examples:**

 * Clone into directory called `vifm`:
   ```
   :Gclone https://github.com/vifm/vifm.git
   ```

 * Clone into directory called `vifm-dev`:
   ```
   :Gclone https://github.com/vifm/vifm.git vifm-dev
   ```

**Parameters:**

 1. URL to clone from (required).
 2. Destination (optional).  Derived from the last component of the URL removing
    `.git` suffix.
