/**
 * pfauth.c - pf (4) authentication tool
 * Author Christian J. Kiewiet, <ckiewiet@wackysquirrel.de>
 * Copyright 2012, wackysquirrel
 *
 * This tool will allow administrators who employ a strict / paranoid access control policy
 * to enabling their users to adding their IP {,subnets} to pf (4) tables. It was originally 
 * written to allow the local users of a wackysquirrel server to authenticate themselves and 
 * then add their own IP range to the whitelist of IPs that can be read by pfctl (4) / 
 * pf.conf (5). 
 *
 * In theory, this tool can be reconfigured and rewritten to perform any kind of pf (4) man-
 * ipulating tasks. However, it remains at the user's discretion to decide how much power
 * should be granted to their users.
 *
 * The author of this software does *not* guarantee the safety of this tool, nor is he to be
 * held accountable for any kind of intrusion that may or may not be caused by usage of this
 * tool.
 *
 * ATTENTION: THIS TOOL ALMOST CERTAINLY REQUIRES ROOT (AS IN UID 0) TO RUN, IT IS THEREFORE
 *            ADVISABLE TO REGULARLY CHECK THE SOURCE OF THIS TOOL[1] FOR SECURITY RELEVANT
 *            UPDATES AND HOTFIXES
 *
 * [1]: https://github.com/knubbze/pfauth
 */
