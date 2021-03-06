#include "../io_lock.c"
#include <common/amount.h>
#include <common/setup.h>
#include <common/utils.h>
#include <sys/socket.h>
#include <stdio.h>
#include <wire/wire.h>

/* AUTOGENERATED MOCKS START */
/* Generated stub for amount_asset_is_main */
bool amount_asset_is_main(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_is_main called!\n"); abort(); }
/* Generated stub for amount_asset_to_sat */
struct amount_sat amount_asset_to_sat(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_to_sat called!\n"); abort(); }
/* Generated stub for amount_sat */
struct amount_sat amount_sat(u64 satoshis UNNEEDED)
{ fprintf(stderr, "amount_sat called!\n"); abort(); }
/* Generated stub for amount_sat_add */
 bool amount_sat_add(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_add called!\n"); abort(); }
/* Generated stub for amount_sat_eq */
bool amount_sat_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_eq called!\n"); abort(); }
/* Generated stub for amount_sat_greater_eq */
bool amount_sat_greater_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_greater_eq called!\n"); abort(); }
/* Generated stub for amount_sat_sub */
 bool amount_sat_sub(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_sub called!\n"); abort(); }
/* Generated stub for amount_sat_to_asset */
struct amount_asset amount_sat_to_asset(struct amount_sat *sat UNNEEDED, const u8 *asset UNNEEDED)
{ fprintf(stderr, "amount_sat_to_asset called!\n"); abort(); }
/* Generated stub for amount_tx_fee */
struct amount_sat amount_tx_fee(u32 fee_per_kw UNNEEDED, size_t weight UNNEEDED)
{ fprintf(stderr, "amount_tx_fee called!\n"); abort(); }
/* Generated stub for fromwire */
const u8 *fromwire(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, void *copy UNNEEDED, size_t n UNNEEDED)
{ fprintf(stderr, "fromwire called!\n"); abort(); }
/* Generated stub for fromwire_amount_sat */
struct amount_sat fromwire_amount_sat(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_amount_sat called!\n"); abort(); }
/* Generated stub for fromwire_bool */
bool fromwire_bool(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_bool called!\n"); abort(); }
/* Generated stub for fromwire_fail */
void *fromwire_fail(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_fail called!\n"); abort(); }
/* Generated stub for fromwire_secp256k1_ecdsa_signature */
void fromwire_secp256k1_ecdsa_signature(const u8 **cursor UNNEEDED, size_t *max UNNEEDED,
					secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "fromwire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for fromwire_sha256 */
void fromwire_sha256(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "fromwire_sha256 called!\n"); abort(); }
/* Generated stub for fromwire_tal_arrn */
u8 *fromwire_tal_arrn(const tal_t *ctx UNNEEDED,
		       const u8 **cursor UNNEEDED, size_t *max UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "fromwire_tal_arrn called!\n"); abort(); }
/* Generated stub for fromwire_u16 */
u16 fromwire_u16(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u16 called!\n"); abort(); }
/* Generated stub for fromwire_u32 */
u32 fromwire_u32(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u32 called!\n"); abort(); }
/* Generated stub for fromwire_u64 */
u64 fromwire_u64(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u64 called!\n"); abort(); }
/* Generated stub for fromwire_u8 */
u8 fromwire_u8(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u8 called!\n"); abort(); }
/* Generated stub for fromwire_u8_array */
void fromwire_u8_array(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, u8 *arr UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "fromwire_u8_array called!\n"); abort(); }
/* Generated stub for towire */
void towire(u8 **pptr UNNEEDED, const void *data UNNEEDED, size_t len UNNEEDED)
{ fprintf(stderr, "towire called!\n"); abort(); }
/* Generated stub for towire_amount_sat */
void towire_amount_sat(u8 **pptr UNNEEDED, const struct amount_sat sat UNNEEDED)
{ fprintf(stderr, "towire_amount_sat called!\n"); abort(); }
/* Generated stub for towire_bool */
void towire_bool(u8 **pptr UNNEEDED, bool v UNNEEDED)
{ fprintf(stderr, "towire_bool called!\n"); abort(); }
/* Generated stub for towire_secp256k1_ecdsa_signature */
void towire_secp256k1_ecdsa_signature(u8 **pptr UNNEEDED,
			      const secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "towire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for towire_sha256 */
void towire_sha256(u8 **pptr UNNEEDED, const struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "towire_sha256 called!\n"); abort(); }
/* Generated stub for towire_u16 */
void towire_u16(u8 **pptr UNNEEDED, u16 v UNNEEDED)
{ fprintf(stderr, "towire_u16 called!\n"); abort(); }
/* Generated stub for towire_u32 */
void towire_u32(u8 **pptr UNNEEDED, u32 v UNNEEDED)
{ fprintf(stderr, "towire_u32 called!\n"); abort(); }
/* Generated stub for towire_u64 */
void towire_u64(u8 **pptr UNNEEDED, u64 v UNNEEDED)
{ fprintf(stderr, "towire_u64 called!\n"); abort(); }
/* Generated stub for towire_u8 */
void towire_u8(u8 **pptr UNNEEDED, u8 v UNNEEDED)
{ fprintf(stderr, "towire_u8 called!\n"); abort(); }
/* Generated stub for towire_u8_array */
void towire_u8_array(u8 **pptr UNNEEDED, const u8 *arr UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "towire_u8_array called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

#define num_writers 10
#define num_writes 10

struct read_state {
	int pos;

	/* What have we read from the funnel end? Should be
	 * num_writers sets of num_writes consecutive identical
	 * numbers */
	u8 reads[num_writers*num_writes];

	/* All tasks reading from upstream writers will serialize on this */
	struct io_lock *lock;
};

/* The read context per connection */
struct reader_state {
	struct read_state *read_state;

	/* Where are we reading from? */
	struct io_conn *upstream;
	u8 buf;

	int count;
};

struct write_state {
	int count;
	u8 id;
};

static struct io_plan *writer(struct io_conn *conn, struct write_state *ws)
{
	if (ws->count++ == num_writes)
		return io_close(conn);
	return io_write(conn, &ws->id, 1, writer, ws);
}

static struct io_plan *reader(struct io_conn *conn, struct reader_state *reader_state)
{
	struct read_state *rs = reader_state->read_state;
	rs->reads[rs->pos] = reader_state->buf;
	rs->pos++;
	reader_state->count++;

	if (reader_state->count == num_writes) {
		io_lock_release(reader_state->read_state->lock);
		return io_close(conn);
	} else {
		return io_read(conn, &reader_state->buf, 1, reader, reader_state);
	}
}

static struct io_plan *reader_start(struct io_conn *conn, struct reader_state *reader_state)
{
	return io_read(conn, &reader_state->buf, 1, reader, reader_state);
}

static struct io_plan *reader_locked(struct io_conn *conn, struct reader_state *rs)
{
	return io_lock_acquire_in(conn, rs->read_state->lock, reader_start, rs);
}

/*
 * Creates a fan-in funnel from num_writers socketpairs into a single
 * reader
 *
 *   writers
 *    \\|//
 *   reader
 */
static bool test_multi_write(const tal_t *ctx)
{
	struct write_state ws[num_writers];
	struct read_state sink;
	struct reader_state rs[num_writers];
	int fds[2];

	sink.pos = 0;
	sink.lock = io_lock_new(ctx);
	memset(&sink.reads, 0, sizeof(sink.reads));

	for (size_t i=0; i<num_writers; i++) {
		socketpair(AF_LOCAL, SOCK_STREAM, 0, fds);

		rs[i].read_state = &sink;
		rs[i].count = 0;
		rs[i].buf = -1;

		ws[i].id = (u8)(i+'a');
		ws[i].count = 0;

		rs[i].upstream = io_new_conn(ctx, fds[1], writer, &ws[i]);
		io_new_conn(ctx, fds[0], reader_locked, &rs[i]);
	}
	io_loop(NULL, NULL);

	/* Now check that we were serialized correctly, i.e., num_writers sets of num_writes identical numbers */
	for (size_t i=0; i<num_writers; i++) {
		for (size_t j=1; j<num_writes; j++)
			if (sink.reads[i*num_writes+j] != sink.reads[i*num_writes+j-1])
				return false;
	}

	return true;
}

int main(int argc, char *argv[])
{
	bool ok = true;
	common_setup(argv[0]);
	ok &= test_multi_write(tmpctx);
	common_shutdown();
	return !ok;
}
