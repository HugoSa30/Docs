/*
 * Program: n42.bin
 * Function: FUN_0017dd20
 * Entry: 0017dd20
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017dd20(void)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((((((B_falsh2 == '\0') && ((CLRSHK & 1) == 0)) && ((DAT_003fdfb9 & 1) == 0)) &&
       (((B_silm & 1) == 0 || ((DAT_001d2825 >> 5 & 1) != 0)))) && (B_mdarv == 0)) &&
     (B_falsh == '\0')) {
    DAT_005b8b52 = DAT_005b8b52 | 1;
  }
  else {
    DAT_005b8b52 = DAT_005b8b52 & 0xfe;
  }
  if (_DAT_003fd7ec < _DAT_001d27f8) {
    DAT_005b8b53 = DAT_005b8b53 & 0x7f;
  }
  else {
    DAT_005b8b53 = DAT_005b8b53 | 0x80;
  }
  if ((_DAT_001d27fa < (short)drlas_w) || ((short)drlas_w < _DAT_001d27fc)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  DAT_003fb6c4 = func_0xff221e78(&UNK_003fb6c5,uVar4,DAT_001d282a);
  if (DAT_003fb6c4 == '\0') {
    func_0xff222398(&DAT_003fb6ac,(ushort)ml * 0x12,0x24);
  }
  else {
    _DAT_003fb6ac = 0;
  }
  uVar3 = (_DAT_003fb6ac >> 0x10) * 2;
  DAT_005b8b4a = (undefined2)uVar3;
  uVar2 = _DAT_001d2800;
  if ((DAT_005b8b53 & 0x80) != 0) {
    uVar2 = _DAT_001d27fe;
  }
  if ((uVar3 & 0xffff) < (uint)uVar2) {
    DAT_005b8b53 = DAT_005b8b53 & 0xfd;
  }
  else {
    DAT_005b8b53 = DAT_005b8b53 | 2;
  }
  if (lamsons_w - 0xffe < 5) {
    DAT_005b8b53 = DAT_005b8b53 | 0x10;
  }
  else {
    DAT_005b8b53 = DAT_005b8b53 & 0xef;
  }
  if (lamsons2_w - 0xffe < 5) {
    DAT_005b8b54 = DAT_005b8b54 | 4;
  }
  else {
    DAT_005b8b54 = DAT_005b8b54 & 0xfb;
  }
  DAT_003fb6b1 = func_0xff221e78(&UNK_003fb6b2,B_lr,DAT_001d2828);
  if (DAT_003fb6b1 == '\0') {
    DAT_005b8b52 = DAT_005b8b52 & 0xbf;
  }
  else {
    DAT_005b8b52 = DAT_005b8b52 | 0x40;
  }
  if (DAT_003fc1a3 != '\0') {
    DAT_003fb6bc = '\x01';
  }
  uVar2 = _DAT_001d280e;
  if ((DAT_005b8b53 & 0x80) != 0) {
    uVar2 = _DAT_001d2820;
  }
  if ((DAT_005b8770 < _DAT_001d2818) && (uVar2 <= DAT_005b8770)) {
    DAT_005b8b55 = DAT_005b8b55 | 1;
  }
  else {
    DAT_005b8b55 = DAT_005b8b55 & 0xfe;
  }
  bVar1 = tmot < DAT_001d282c;
  uVar2 = _DAT_001d2816;
  if ((DAT_003fb6bc == '\0') && (uVar2 = _DAT_001d2812, (DAT_005b8b53 & 0x80) != 0)) {
    uVar2 = _DAT_001d281c;
  }
  if ((DAT_005b8770 < uVar2) || (bVar1)) {
    DAT_005b8b55 = DAT_005b8b55 & 0xfd;
  }
  else {
    DAT_005b8b55 = DAT_005b8b55 | 2;
  }
  DAT_003fb6b5 = func_0xff221e78(&UNK_003fb6b6,B_lr2,DAT_001d2829);
  if (DAT_003fb6b5 == '\0') {
    DAT_005b8b56 = DAT_005b8b56 & 0xdf;
  }
  else {
    DAT_005b8b56 = DAT_005b8b56 | 0x20;
  }
  if (((((DAT_005b8b52 & 1) == 0) || ((DAT_005b8b52 & 0x40) == 0)) || ((DAT_005b8b55 & 1) == 0)) ||
     (((DAT_005b8b53 & 0x10) == 0 ||
      ((((DAT_005b8b56 & 0x20) == 0 || ((DAT_005b8b54 & 4) == 0)) && ((DAT_001cb343 >> 1 & 1) != 0))
      )))) {
    DAT_005b8b52 = DAT_005b8b52 & 0x7f;
  }
  else {
    DAT_005b8b52 = DAT_005b8b52 | 0x80;
  }
  if ((DAT_003fdf2b & 1) == 0) {
    DAT_005b8b52 = DAT_005b8b52 & 0xfb;
  }
  else {
    DAT_005b8b52 = DAT_005b8b52 | 4;
  }
  if (((DAT_003fdf49 & 1) == 0) || ((DAT_003fdf49 >> 1 & 1) == 0)) {
    DAT_005b8b52 = DAT_005b8b52 & 0xef;
  }
  else {
    DAT_005b8b52 = DAT_005b8b52 | 0x10;
  }
  if (((DAT_003fdfa7 & 1) == 0) || ((DAT_001d2825 >> 6 & 1) != 0)) {
    DAT_005b8b52 = DAT_005b8b52 & 0xdf;
  }
  else {
    DAT_005b8b52 = DAT_005b8b52 | 0x20;
  }
  if ((DAT_003fdf1b & 1) == 0) {
    DAT_005b8b52 = DAT_005b8b52 & 0xfd;
  }
  else {
    DAT_005b8b52 = DAT_005b8b52 | 2;
  }
  if (((((DAT_005b8b52 & 0x20) == 0) && ((DAT_003fdf23 & 1) == 0)) && ((DAT_003fdfbb & 1) == 0)) &&
     (B_edkvs == '\0')) {
    DAT_005b8b53 = DAT_005b8b53 | 1;
  }
  else {
    DAT_005b8b53 = DAT_005b8b53 & 0xfe;
  }
  if (((DAT_005b8b52 & 4) == 0) || ((DAT_001d2825 >> 1 & 1) != 0)) {
    DAT_005b8b52 = DAT_005b8b52 | 8;
  }
  else {
    DAT_005b8b52 = DAT_005b8b52 & 0xf7;
  }
  if ((((((DAT_005b8b52 & 0x80) == 0) || ((B_lamka & B_lrka) != 0)) ||
       ((B_sbbhk == '\0' || (((DAT_005b8b52 & 0x10) != 0 || ((DAT_005b8b52 & 2) != 0)))))) ||
      (((DAT_005b8b52 & 4) != 0 && ((DAT_001d2825 & 1) == 0)))) || ((DAT_005b8b53 & 1) == 0)) {
    lrshkebAusBits = lrshkebAusBits & ~B_lrhkpzp;
  }
  else {
    lrshkebAusBits = lrshkebAusBits | B_lrhkpzp;
  }
  if (DAT_003fb6b0 == '\0') {
    DAT_005b8b53 = DAT_005b8b53 & 0xfb;
  }
  else {
    DAT_005b8b53 = DAT_005b8b53 | 4;
  }
  if (((DAT_005b8b53 & 4) != 0) && ((B_lamka & B_lrka) == 0)) {
    DAT_003fb6b0 = '\0';
  }
  if ((_DAT_001d2802 < DAT_005b9b60) && (DAT_005b9b60 < _DAT_001d2804)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  DAT_003fb6a8 = func_0xff221e78(&UNK_003fb6a9,uVar4,DAT_001d282b);
  if ((DAT_003fb6a8 == '\0') && ((DAT_005b8b53 & 4) == 0)) {
    func_0xff222398(&DAT_003fb6b8,(ushort)ml * 0x12,0x24);
  }
  else {
    _DAT_003fb6b8 = 0;
  }
  uVar3 = (_DAT_003fb6b8 >> 0x10) * 2;
  DAT_005b8b4e = (undefined2)uVar3;
  uVar2 = _DAT_001d280a;
  if ((DAT_005b8b53 & 0x80) != 0) {
    uVar2 = _DAT_001d2806;
  }
  if ((uVar3 & 0xffff) < (uint)uVar2) {
    DAT_005b8b53 = DAT_005b8b53 & 0xf7;
  }
  else {
    DAT_005b8b53 = DAT_005b8b53 | 8;
  }
  if ((((((DAT_005b8b53 & 2) == 0) || ((DAT_005b8b55 & 2) == 0)) || (DAT_001d2826 <= nmot)) ||
      ((nmot < DAT_001d2827 ||
       (((uint)(byte)(&DAT_001d27e8)[DAT_005b9c6c >> 0x10] +
         ((int)((DAT_005b9c6c & 0xffff) *
               ((uint)(byte)(&DAT_001d27e9)[DAT_005b9c6c >> 0x10] -
               (uint)(byte)(&DAT_001d27e8)[DAT_005b9c6c >> 0x10])) >> 0x10) & 0xff) <= (uint)rl))))
     || ((uint)rl <
         ((uint)(byte)(&DAT_001d27f0)[DAT_005b9c6c >> 0x10] +
          ((int)((DAT_005b9c6c & 0xffff) *
                ((uint)(byte)(&DAT_001d27f1)[DAT_005b9c6c >> 0x10] -
                (uint)(byte)(&DAT_001d27f0)[DAT_005b9c6c >> 0x10])) >> 0x10) & 0xff))) {
    DAT_005b8b53 = DAT_005b8b53 & 0xbf;
  }
  else {
    DAT_005b8b53 = DAT_005b8b53 | 0x40;
  }
  if (((DAT_005b8b53 & 8) == 0) || ((DAT_005b8b53 & 0x40) == 0)) {
    DAT_005b8b53 = DAT_005b8b53 & 0xdf;
  }
  else {
    DAT_005b8b53 = DAT_005b8b53 | 0x20;
  }
  if (((((lrshkebAusBits & B_lrhkpzp) == 0) || ((DAT_005b8b52 & 8) == 0)) ||
      ((DAT_005b8b53 & 0x20) == 0)) ||
     (((DAT_005b8b56 & 0x80) == 0 && ((DAT_001cb343 >> 1 & 1) == 0)))) {
    lrshkebAusBits = lrshkebAusBits & ~B_lrhkzp;
  }
  else {
    lrshkebAusBits = lrshkebAusBits | B_lrhkzp;
  }
  if (((DAT_003fdfa9 & 1) == 0) || ((DAT_001d2825 >> 6 & 1) != 0)) {
    DAT_005b8b56 = DAT_005b8b56 & 0xf7;
  }
  else {
    DAT_005b8b56 = DAT_005b8b56 | 8;
  }
  if ((DAT_003fdfbb & 1) == 0) {
    DAT_005b8b56 = DAT_005b8b56 & 0xef;
  }
  else {
    DAT_005b8b56 = DAT_005b8b56 | 0x10;
  }
  if (((((DAT_005b8b56 & 8) == 0) && ((DAT_005b8b56 & 0x10) == 0)) && (B_edkvs2 == '\0')) &&
     ((DAT_003fdf25 & 1) == 0)) {
    DAT_005b8b56 = DAT_005b8b56 | 0x80;
  }
  else {
    DAT_005b8b56 = DAT_005b8b56 & 0x7f;
  }
  uVar2 = _DAT_001d2810;
  if ((DAT_005b8b53 & 0x80) != 0) {
    uVar2 = _DAT_001d2822;
  }
  if ((DAT_005b876e < _DAT_001d281a) && (uVar2 <= DAT_005b876e)) {
    DAT_005b8b54 = DAT_005b8b54 | 0x10;
  }
  else {
    DAT_005b8b54 = DAT_005b8b54 & 0xef;
  }
  uVar2 = _DAT_001d2816;
  if ((DAT_003fb6bc == '\0') && (uVar2 = _DAT_001d2814, (DAT_005b8b53 & 0x80) != 0)) {
    uVar2 = _DAT_001d281e;
  }
  if ((DAT_005b876e < uVar2) || (bVar1)) {
    DAT_005b8b54 = DAT_005b8b54 & 0xdf;
  }
  else {
    DAT_005b8b54 = DAT_005b8b54 | 0x20;
  }
  if ((((((DAT_005b8b52 & 1) == 0) || ((DAT_005b8b56 & 0x20) == 0)) || ((DAT_005b8b54 & 0x10) == 0))
      || ((DAT_005b8b54 & 4) == 0)) ||
     ((((DAT_005b8b53 & 0x10) == 0 || ((DAT_005b8b52 & 0x40) == 0)) &&
      ((DAT_001cb343 >> 1 & 1) != 0)))) {
    DAT_005b8b56 = DAT_005b8b56 & 0xbf;
  }
  else {
    DAT_005b8b56 = DAT_005b8b56 | 0x40;
  }
  if ((DAT_003fdf2d & 1) == 0) {
    DAT_005b8b56 = DAT_005b8b56 & 0xfe;
  }
  else {
    DAT_005b8b56 = DAT_005b8b56 | 1;
  }
  if (((DAT_003fdf4b & 1) == 0) || ((DAT_003fdf4b >> 1 & 1) == 0)) {
    DAT_005b8b56 = DAT_005b8b56 & 0xfb;
  }
  else {
    DAT_005b8b56 = DAT_005b8b56 | 4;
  }
  if (((DAT_005b8b56 & 1) == 0) || ((DAT_001d2825 >> 1 & 1) != 0)) {
    DAT_005b8b56 = DAT_005b8b56 | 2;
  }
  else {
    DAT_005b8b56 = DAT_005b8b56 & 0xfd;
  }
  if ((((((DAT_005b8b56 & 0x40) == 0) || ((B_lamka & B_lrka2) != 0)) || (B_sbbhk2 == '\0')) ||
      ((((DAT_003fdf1d & 1) != 0 || ((DAT_005b8b56 & 4) != 0)) ||
       (((DAT_005b8b56 & 1) != 0 && ((DAT_001d2825 & 1) == 0)))))) || ((DAT_005b8b56 & 0x80) == 0))
  {
    B_lrhkzp2 = B_lrhkzp2 & ~B_lrhkpzp2;
  }
  else {
    B_lrhkzp2 = B_lrhkzp2 | B_lrhkpzp2;
  }
  if (DAT_003fb6b7 == '\0') {
    DAT_005b8b54 = DAT_005b8b54 & 0xfe;
  }
  else {
    DAT_005b8b54 = DAT_005b8b54 | 1;
  }
  if (((DAT_005b8b54 & 1) != 0) && ((B_lamka & B_lrka2) == 0)) {
    DAT_003fb6b7 = '\0';
  }
  if ((_DAT_001d2802 < DAT_005b9b5e) && (DAT_005b9b5e < _DAT_001d2804)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  DAT_003fb6b3 = func_0xff221e78(&UNK_003fb6b4,uVar4,DAT_001d282b);
  if ((DAT_003fb6b3 == '\0') && ((DAT_005b8b54 & 1) == 0)) {
    func_0xff222398(&DAT_003fb6c0,(ushort)ml * 0x12,0x24);
  }
  else {
    _DAT_003fb6c0 = 0;
  }
  uVar3 = (_DAT_003fb6c0 >> 0x10) * 2;
  DAT_005b8b4c = (short)uVar3;
  uVar2 = _DAT_001d280c;
  if ((DAT_005b8b53 & 0x80) != 0) {
    uVar2 = _DAT_001d2808;
  }
  if ((uVar3 & 0xffff) < (uint)uVar2) {
    DAT_005b8b54 = DAT_005b8b54 & 0xfd;
  }
  else {
    DAT_005b8b54 = DAT_005b8b54 | 2;
  }
  if ((((DAT_005b8b54 & 2) == 0) || ((DAT_005b8b53 & 0x40) == 0)) || ((DAT_005b8b54 & 0x20) == 0)) {
    DAT_005b8b54 = DAT_005b8b54 & 0xf7;
  }
  else {
    DAT_005b8b54 = DAT_005b8b54 | 8;
  }
  if ((((B_lrhkzp2 & B_lrhkpzp2) == 0) || ((DAT_005b8b56 & 2) == 0)) ||
     (((DAT_005b8b54 & 8) == 0 || (((DAT_005b8b53 & 1) == 0 && ((DAT_001cb343 >> 1 & 1) != 0)))))) {
    B_lrhkzp2 = B_lrhkzp2 & ~B_lrhkzp2;
  }
  else {
    B_lrhkzp2 = B_lrhkzp2 | B_lrhkzp2;
  }
  if ((lrshkebAusBits & B_lrhkzp) == 0) {
    lrshkebAusBits = lrshkebAusBits & ~B_lrhk;
  }
  else {
    lrshkebAusBits = lrshkebAusBits | B_lrhk;
  }
  if ((lrshkebAusBits & B_lrhkpzp) == 0) {
    lrshkebAusBits = lrshkebAusBits & ~B_lrhkp;
  }
  else {
    lrshkebAusBits = lrshkebAusBits | B_lrhkp;
  }
  if ((B_lrhkzp2 & B_lrhkzp2) == 0) {
    B_lrhkzp2 = B_lrhkzp2 & ~B_lrhk2;
  }
  else {
    B_lrhkzp2 = B_lrhkzp2 | B_lrhk2;
  }
  if ((B_lrhkzp2 & B_lrhkpzp2) == 0) {
    B_lrhkzp2 = B_lrhkzp2 & ~B_lrhkp2;
  }
  else {
    B_lrhkzp2 = B_lrhkzp2 | B_lrhkp2;
  }
  if ((DAT_001cb634 & 1) == 0) {
    lrshkebAusBits = lrshkebAusBits & 0xef;
  }
  else {
    lrshkebAusBits = lrshkebAusBits | 0x10;
  }
  return;
}

