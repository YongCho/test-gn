#ifndef FOO_H
#define FOO_H

const int FOO = 3;
void foo();

#ifdef DEFINE_FOR_ALL
const bool global_define_seen_at_foo_header = true;
#else
const bool global_define_seen_at_foo_header = false;
#endif

#endif
