/* A packrat parser generated by PackCC 1.3.1 */

#ifndef PCC_INCLUDED_TESTS_CALC_GENERATED_H
#define PCC_INCLUDED_TESTS_CALC_GENERATED_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct calc_context_tag calc_context_t;

calc_context_t *calc_create(void *auxil);
int calc_parse(calc_context_t *ctx, int *ret);
void calc_destroy(calc_context_t *ctx);

#ifdef __cplusplus
}
#endif

#endif /* !PCC_INCLUDED_TESTS_CALC_GENERATED_H */
