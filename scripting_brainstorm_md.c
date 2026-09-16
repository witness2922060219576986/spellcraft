filename:.env "DATABASE_URL"
"bearer " language:json path:.env
/AIza[0-9A-Za-z\\-_]{35}/
"-----BEGIN RSA PRIVATE KEY-----"
"BEGIN OPENSSH PRIVATE KEY" path:id_rsa
path:.aws/credentials "aws_secret_access_key"
filename:config.json "password"
"INTERNAL USE ONLY" NOT is:archived
"TODO: remove before commit" password
If you are using GitHub Code Search to hunt for exposed secrets, uncommitted sensitive files, or things accidentally pushed to public repositories, targeted qualifiers and patterns are the way to find them.
**High-Risk Target Patterns**
 * **API Keys & Bearer Tokens**
   ```text
   "bearer " language:json path:.env
   
   ```
   ```text
   /AIza[0-9A-Za-z\\-_]{35}/
   
   ```
   *(Matches standard Google API key formats across code).*
 * **Private Keys & Certificates**
   ```text
   "-----BEGIN RSA PRIVATE KEY-----"
   
   ```
   ```text
   "BEGIN OPENSSH PRIVATE KEY" path:id_rsa
   
   ```
 * **Leaked Credentials in Environment or Config Files**
   ```text
   filename:.env "DATABASE_URL"
   
   ```
   ```text
   path:.aws/credentials "aws_secret_access_key"
   
   ```
   ```text
   filename:config.json "password"
   
   ```
 * **Accidental Internal Hardcoding**
   ```text
   "INTERNAL USE ONLY" NOT is:archived
   
   ```
   ```text
   "TODO: remove before commit" password
   
   ```
**Effective Refinement Qualifiers**
 * path: or filename: — Pinpoint configuration files, dotfiles, or shell histories (e.g., filename:.bash_history).
 * repo: or org: — Restrict the scan to a specific organization or repository.
 * language: — Filter out noise by focusing on configuration formats like yaml, json, or shell.
 * NOT / AND — Chain operators to exclude boilerplate templates or mock tests (e.g., NOT "example").
Are you scanning your own repositories for security remediation, or looking for a specific type of key, token, or configuration artifact?
# features
the ablity to embed variables into text
global variables/local variables
simple computations
conditional branching/loops
show dialog
run arbitrary cutscene steps
animation

## the ablity to embed variables into text

```
dialog "A text block with a {variable} embedded"
```

## global variables

```
global variable: bool
global variable: i32
```

## local varaibles

```
local variable: bool
```

## setting variables

```
variable = expression
```

# simple computations

operators and, or, not, +, -, *, /, ==, !=, >, <, <=, >=

lisp? (and a b (or c d))
infix? a and b and (c or d)

# conditional

```
if condition then
    actions
end
```

# dialog

```
say "A message of text"
dialog "A message of text"

dialog """
    This is a how dialog that has mulitple lines will look

    This should show up after pressing a
"""

```

# cutscene steps

steps will look like function calls with comma separated values

```
look_at player, active_npc
run_animation intro
walk_to active_npc, exit

```
