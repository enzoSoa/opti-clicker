typedef struct iuint iuint;

struct iuint {
  unsigned int index, value;
  iuint *next;
};

extern const iuint dumbIuint;

