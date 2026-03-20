/*
 * Program: n42.bin
 * Function: FUN_00198060
 * Entry: 00198060
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00198350) */
/* WARNING: Removing unreachable block (ram,0x0019825c) */
/* WARNING: Removing unreachable block (ram,0x001980e8) */
/* WARNING: Removing unreachable block (ram,0x001980c0) */
/* WARNING: Removing unreachable block (ram,0x00198138) */
/* WARNING: Removing unreachable block (ram,0x0019831c) */
/* WARNING: Removing unreachable block (ram,0x00198380) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00198060(void)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  if (B_koe == '\0') {
    uVar2 = func_0xff218fcc(DAT_001c8410,&DAT_001c8411,&DAT_001c8416,(int)(char)ngfil);
    uVar2 = (uint)nwem_out + (uVar2 & 0xff);
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    nwe = (byte)uVar2;
  }
  else {
    uVar2 = func_0xff218fcc(DAT_001c8410,&DAT_001c8411,&DAT_001c8416,(int)(char)ngfil);
    uVar2 = (uint)nwem_out + (uVar2 & 0xff);
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    uVar2 = (uVar2 & 0xff) + (uint)DAT_001c840a;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    nwe = (byte)uVar2;
  }
  if (((DAT_003fb2fd >> 1 & 1) == 0) || (B_ll != 0)) {
    if (((uint)DAT_001c8407 << 8 < (uint)_DAT_003fb304) && (B_llrein != '\0')) {
      _DAT_003fb304 =
           func_0xff217c10(0x51f,(int)_DAT_001c840e,(int)(short)_DAT_003fb304,
                           (int)(short)((ushort)DAT_001c8407 << 8),0x7fff);
    }
  }
  else {
    _DAT_003fb304 = (ushort)DAT_001c8406 << 8;
    DAT_005b917a = DAT_005b917a & 0xfe;
  }
  bVar3 = (B_ll & 1) << 1;
  if ((((DAT_003fb2fd >> 5 & 1) != 0) && (B_sab == '\0')) && (B_ll != 0)) {
    DAT_005b917a = DAT_005b917a | 1;
  }
  uVar2 = (uint)DAT_001c840d + (uint)DAT_001c840b;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  if ((uint)vfzg < (uVar2 & 0xff)) {
    bVar1 = bVar3 | DAT_003fb2fd & 0xfd;
    if ((uint)vfzg <= (uint)DAT_001c840d) {
      bVar1 = bVar3 | DAT_003fb2fd & 0xed;
    }
  }
  else {
    bVar1 = bVar3 | DAT_003fb2fd & 0xed | 0x10;
  }
  DAT_003fb2fd = bVar1;
  if ((DAT_003fb2fd >> 4 & 1) == 0) {
    if ((DAT_005b917a & 1) == 0) {
      uVar2 = (uint)DAT_001c8409 + (uint)DAT_003fb304;
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      DAT_005b917b = (byte)uVar2;
    }
    else {
      uVar2 = (uint)DAT_001c8409 + (uint)DAT_001c8408;
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      DAT_005b917b = (byte)uVar2;
    }
  }
  else {
    DAT_005b917b = DAT_003fb304;
    if ((DAT_005b917a & 1) != 0) {
      DAT_005b917b = DAT_001c8408;
    }
  }
  uVar2 = (uint)nwe + (uint)DAT_005b917b;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  DAT_005b917c = (undefined)uVar2;
  if ((uint)nmot < (uVar2 & 0xff)) {
    if ((uint)nmot <= (uint)nwe) {
      DAT_003fb2fd = DAT_003fb2fd & 0xf7;
    }
  }
  else {
    DAT_003fb2fd = DAT_003fb2fd & 0xf7 | 8;
  }
  if (DAT_003fc191 == '\0') {
    if (((uint)DAT_001c840c & 1 << (gangi & 0x3f)) == 0) {
      DAT_003fb2fd = DAT_003fb2fd & 0xfb;
    }
    else {
      DAT_003fb2fd = DAT_003fb2fd & 0xfb | 4;
    }
  }
  else {
    DAT_003fb2fd = (DAT_003fc1be & 1) << 2 | DAT_003fb2fd & 0xfb;
  }
  if (((((DAT_003fb2fd & 1) == 0) || (bVar3 = func_0xff2187cc(&DAT_001d1a00), bVar3 < tkatm)) ||
      ((B_dsls != '\0' || ((DAT_003fbf70 != '\0' || (B_kh != '\0')))))) ||
     ((B_dash != '\0' ||
      ((((B_falls != '\0' || ((DAT_003fb2fd >> 2 & 1) == 0)) || ((DAT_003fb2fd >> 3 & 1) == 0)) ||
       (B_ll == 0)))))) {
    DAT_005b917a = DAT_005b917a & 0xfd;
  }
  else {
    DAT_005b917a = DAT_005b917a | 2;
  }
  if ((DAT_005b917a & 2) == 0) {
    DAT_003fb2fd = DAT_003fb2fd & 0x3f;
    DAT_003fb300 = DAT_003fb301;
    DAT_003fb306 = DAT_003fb307;
  }
  else {
    if (DAT_003fb300 == '\0') {
      DAT_003fb2fd = DAT_003fb2fd & 0xbf | 0x40;
    }
    else {
      DAT_003fb300 = DAT_003fb300 + -1;
    }
    if (DAT_003fb306 == '\0') {
      DAT_003fb2fd = DAT_003fb2fd & 0x7f | 0x80;
    }
    else {
      DAT_003fb306 = DAT_003fb306 + -1;
    }
  }
  if (B_sab == '\0') {
    DAT_003fb2fd = DAT_003fb2fd & 0xdf;
  }
  else {
    DAT_003fb2fd = DAT_003fb2fd & 0xdf | 0x20;
  }
  if (B_kuppl == '\0') {
    B_sab = DAT_003fb2fd >> 6 & 1;
  }
  else {
    B_sab = DAT_003fb2fd >> 7;
  }
  return;
}

