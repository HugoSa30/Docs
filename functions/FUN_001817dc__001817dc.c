/*
 * Program: n42.bin
 * Function: FUN_001817dc
 * Entry: 001817dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001817dc(void)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  ushort local_78;
  ushort local_74 [2];
  ushort local_70 [2];
  ushort *local_6c;
  ushort local_68 [2];
  ushort *local_64;
  ushort local_60 [2];
  ushort *local_5c;
  ushort local_58 [2];
  ushort *local_54;
  ushort local_50 [2];
  ushort *local_4c;
  ushort local_48 [2];
  ushort *local_44;
  ushort local_40 [2];
  ushort *local_3c;
  ushort local_38 [2];
  ushort *local_34;
  
  tamx = func_0xff2190c8(DAT_001ccc3c,&DAT_001ccc3d,0x1ccc46,ub);
  tamn = func_0xff2190c8(DAT_001ccc22,&DAT_001ccc23,&DAT_001ccc2c,ub);
  tarlmn = func_0xff2190c8(DAT_001ccc08,&DAT_001ccc09,0x1ccc12,ub);
  if (tarlmn == 0) {
    uVar2 = (uint)DAT_001ccc6d << 0xb;
  }
  else {
    uVar2 = ((uint)DAT_001ccc6d << 0xb) / (uint)tarlmn;
  }
  uVar2 = (int)uVar2 >> 5;
  if (8 < uVar2) {
    uVar2 = 8;
  }
  tarlmx = (byte)uVar2;
  bVar1 = DZPOTP;
  if (DZPOTP < DZPKSUBR) {
    bVar1 = DZPKSUBR;
  }
  uVar3 = (ushort)bVar1;
  if (uVar3 < DZPKSMSR) {
    uVar3 = (ushort)DZPKSMSR;
  }
  if (uVar3 < DZPTIM) {
    uVar3 = (ushort)DZPTIM;
  }
  if (uVar3 < DAT_001ccc6b) {
    uVar3 = (ushort)DAT_001ccc6b;
  }
  if (uVar3 < DZPKSUB) {
    uVar3 = (ushort)DZPKSUB;
  }
  if (uVar3 < DZPKSMS) {
    uVar3 = (ushort)DZPKSMS;
  }
  B_dzzyk = uVar3 < cycle;
  local_78 = _Z_dzku0;
  if ((((CW_DZKU & 1) == 0) || (B_dzkdmd != 0)) &&
     ((DAT_005b8f28 != '\0' || (DAT_005b8f40 != '\0')))) {
    local_78 = _Z_dzku0 & 0xd0fc | 0x2103;
  }
  if ((((CW_DZKU & 1) == 0) || (B_dzkdmd != 0)) && (DAT_005b8f38 != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2203;
  }
  if (DAT_005b8f58 != '\0') {
    local_78 = local_78 & 0xd0fc | 0x2803;
  }
  if ((((CW_DZKU & 1) == 0) || (B_dzkdmd != 0)) && (DAT_005b8f48 != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2403;
  }
  if (((DAT_005b8f48 == '\0') && (DAT_005b8f38 == '\0')) &&
     ((DAT_005b8f28 == '\0' &&
      (((DAT_005b8f40 == '\0' && (DAT_005b8f58 == '\0')) && ((bool)B_dzzyk)))))) {
    local_78 = local_78 & 0xd0fc | 0x2002;
  }
  local_74[0] = local_78;
  local_6c = local_74;
  local_70[0] = local_78;
  func_0xff222958(0x3e,local_70);
  local_78 = _Z_dzku1;
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f31 != '\0')) &&
     ((DAT_005b8f29 != '\0' || (DAT_005b8f41 != '\0')))) {
    local_78 = _Z_dzku1 & 0xd0fc | 0x2103;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f31 != '\0')) && (DAT_005b8f39 != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2203;
  }
  if (DAT_005b8f59 != '\0') {
    local_78 = local_78 & 0xd0fc | 0x2803;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f31 != '\0')) && (DAT_005b8f49 != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2403;
  }
  if (((DAT_005b8f49 == '\0') && (DAT_005b8f39 == '\0')) &&
     (((DAT_005b8f29 == '\0' && ((DAT_005b8f41 == '\0' && (DAT_005b8f59 == '\0')))) &&
      (B_dzzyk != 0)))) {
    local_78 = local_78 & 0xd0fc | 0x2002;
  }
  local_74[0] = local_78;
  local_64 = local_74;
  local_68[0] = local_78;
  func_0xff222958(0x3f,local_68);
  local_78 = _Z_dzku2;
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f32 != '\0')) &&
     ((DAT_005b8f2a != '\0' || (DAT_005b8f42 != '\0')))) {
    local_78 = _Z_dzku2 & 0xd0fc | 0x2103;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f32 != '\0')) && (DAT_005b8f3a != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2203;
  }
  if (DAT_005b8f5a != '\0') {
    local_78 = local_78 & 0xd0fc | 0x2803;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f32 != '\0')) && (DAT_005b8f4a != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2403;
  }
  if (((DAT_005b8f3a == '\0') && (DAT_005b8f2a == '\0')) &&
     ((DAT_005b8f42 == '\0' &&
      (((DAT_005b8f4a == '\0' && (DAT_005b8f5a == '\0')) && (B_dzzyk != 0)))))) {
    local_78 = local_78 & 0xd0fc | 0x2002;
  }
  local_74[0] = local_78;
  local_5c = local_74;
  local_60[0] = local_78;
  func_0xff222958(0x40,local_60);
  local_78 = _Z_dzku3;
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f33 != '\0')) &&
     ((DAT_005b8f2b != '\0' || (DAT_005b8f43 != '\0')))) {
    local_78 = _Z_dzku3 & 0xd0fc | 0x2103;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f33 != '\0')) && (DAT_005b8f3b != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2203;
  }
  if (dzkflag != 0) {
    local_78 = local_78 & 0xd0fc | 0x2803;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f33 != '\0')) && (DAT_005b8f4b != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2403;
  }
  if (((DAT_005b8f4b == '\0') && (DAT_005b8f3b == '\0')) &&
     (((DAT_005b8f2b == '\0' && ((DAT_005b8f43 == '\0' && (dzkflag == 0)))) && (B_dzzyk != 0)))) {
    local_78 = local_78 & 0xd0fc | 0x2002;
  }
  local_74[0] = local_78;
  local_54 = local_74;
  local_58[0] = local_78;
  func_0xff222958(0x41,local_58);
  local_78 = _Z_dzku4;
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f34 != '\0')) &&
     ((DAT_005b8f2c != '\0' || (DAT_005b8f44 != '\0')))) {
    local_78 = _Z_dzku4 & 0xd0fc | 0x2103;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f34 != '\0')) && (DAT_005b8f3c != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2203;
  }
  if (DAT_005b8f5c != '\0') {
    local_78 = local_78 & 0xd0fc | 0x2803;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f34 != '\0')) && (DAT_005b8f4c != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2403;
  }
  if (((DAT_005b8f4c == '\0') && (DAT_005b8f3c == '\0')) &&
     ((DAT_005b8f2c == '\0' &&
      (((DAT_005b8f44 == '\0' && (DAT_005b8f5c == '\0')) && (B_dzzyk != 0)))))) {
    local_78 = local_78 & 0xd0fc | 0x2002;
  }
  local_74[0] = local_78;
  local_4c = local_74;
  local_50[0] = local_78;
  func_0xff222958(0x42,local_50);
  local_78 = _Z_dzku5;
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f35 != '\0')) &&
     ((DAT_005b8f2d != '\0' || (DAT_005b8f45 != '\0')))) {
    local_78 = _Z_dzku5 & 0xd0fc | 0x2103;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f35 != '\0')) && (DAT_005b8f3d != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2203;
  }
  if (DAT_005b8f5d != '\0') {
    local_78 = local_78 & 0xd0fc | 0x2803;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f35 != '\0')) && (DAT_005b8f4d != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2403;
  }
  if (((DAT_005b8f4d == '\0') && (DAT_005b8f3d == '\0')) &&
     (((DAT_005b8f2d == '\0' && ((DAT_005b8f45 == '\0' && (DAT_005b8f5d == '\0')))) &&
      (B_dzzyk != 0)))) {
    local_78 = local_78 & 0xd0fc | 0x2002;
  }
  local_74[0] = local_78;
  local_44 = local_74;
  local_48[0] = local_78;
  func_0xff222958(0x43,local_48);
  local_78 = _Z_dzku6;
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f36 != '\0')) &&
     ((DAT_005b8f2e != '\0' || (DAT_005b8f46 != '\0')))) {
    local_78 = _Z_dzku6 & 0xd0fc | 0x2103;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f36 != '\0')) && (DAT_005b8f3e != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2203;
  }
  if (DAT_005b8f5e != '\0') {
    local_78 = local_78 & 0xd0fc | 0x2803;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f36 != '\0')) && (DAT_005b8f4e != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2403;
  }
  if (((DAT_005b8f4e == '\0') && (DAT_005b8f3e == '\0')) &&
     ((DAT_005b8f2e == '\0' &&
      (((DAT_005b8f46 == '\0' && (DAT_005b8f5e == '\0')) && (B_dzzyk != 0)))))) {
    local_78 = local_78 & 0xd0fc | 0x2002;
  }
  local_74[0] = local_78;
  local_3c = local_74;
  local_40[0] = local_78;
  func_0xff222958(0x44,local_40);
  local_78 = _Z_dzku7;
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f37 != '\0')) &&
     ((DAT_005b8f2f != '\0' || (DAT_005b8f47 != '\0')))) {
    local_78 = _Z_dzku7 & 0xd0fc | 0x2103;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f37 != '\0')) && (DAT_005b8f3f != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2203;
  }
  if (DAT_005b8f5f != '\0') {
    local_78 = local_78 & 0xd0fc | 0x2803;
  }
  if ((((CW_DZKU & 1) == 0) || (DAT_005b8f37 != '\0')) && (DAT_005b8f4f != '\0')) {
    local_78 = local_78 & 0xd0fc | 0x2403;
  }
  if (((DAT_005b8f4f == '\0') && (DAT_005b8f3f == '\0')) &&
     (((DAT_005b8f2f == '\0' && ((DAT_005b8f47 == '\0' && (DAT_005b8f5f == '\0')))) &&
      (B_dzzyk != 0)))) {
    local_78 = local_78 & 0xd0fc | 0x2002;
  }
  local_74[0] = local_78;
  local_34 = local_74;
  local_38[0] = local_78;
  func_0xff222958(0x45,local_38);
  return;
}

