/*!
 * @file
 * @brief Module to watch the Rx210 reset conditions
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef RESET_WATCHER_H
#define RESET_WATCHER_H

/*!
 * Retrieve the last reset condition
 * @return The last reset condition
 */
char *ResetWatcher_ResetFromWatchdog(void);

#endif
