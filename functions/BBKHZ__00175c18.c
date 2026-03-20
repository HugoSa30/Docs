/*
 * Program: n42.bin
 * Function: BBKHZ
 * Entry: 00175c18
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x001763a4) */
/* WARNING: Removing unreachable block (ram,0x00176520) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BBKHZ(void)

{
  bool bVar1;
  ushort uVar3;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_48;
  byte local_44;
  
  if ((B_ll == '\0') || ((B_fs != '\0' && (B_stend != '\0')))) {
    if (DAT_005bb7bc == '\0') {
      DAT_005b8956 = DAT_005b8956 | 1;
    }
    else {
      DAT_005bb7bc = DAT_005bb7bc + -1;
    }
  }
  else {
    DAT_005bb7bc = DAT_001d0ee6;
  }
  if ((_DAT_001d0f3a < tnst_w) && (B_kh != '\0')) {
    DAT_005b8956 = DAT_005b8956 | 2;
  }
  else {
    DAT_005b8956 = DAT_005b8956 & 0xfffd;
  }
  if ((((B_silm & 1) == 0) && ((DAT_003fdfc1 & 1) == 0)) && ((DAT_003fdfb7 & 1) == 0)) {
    DAT_005b8956 = DAT_005b8956 & 0xfeff;
  }
  else {
    DAT_005b8956 = DAT_005b8956 | 0x100;
  }
  if (((B_stend != '\0') && ((DAT_003f9ba4 & 0x40) == 0)) && (_DAT_001d0f36 < tabst_w)) {
    _DAT_003fdc78 = 0;
  }
  if (B_st == '\0') {
LAB_00175df8:
    DAT_003f9ba4 = DAT_003f9ba4 & 0xef;
  }
  else {
    if ((DAT_003f9ba4 & 0x10) == 0) {
      DAT_005bb7be = tmotab;
    }
    DAT_005b8955 = tans;
    if (B_st == '\0') goto LAB_00175df8;
    DAT_003f9ba4 = DAT_003f9ba4 | 0x10;
  }
  uVar6 = (uint)DAT_005b8955;
  uVar2 = (uint)tmst;
  if (uVar2 < uVar6) {
    bVar1 = (int)(uint)DAT_001d0eab < (int)(uVar6 - uVar2);
  }
  else {
    bVar1 = (int)(uint)DAT_001d0eab < (int)(uVar2 - uVar6);
  }
  if (((bool)(bVar1 ^ 1)) && (((DAT_001d0ea9 & 2) == 0 || (_DAT_001d0f34 < tabst_w)))) {
    if ((DAT_001d0ea9 & 4) != 0) {
      uVar6 = DAT_005bb7be - uVar2;
      if ((int)uVar6 < 0) {
        uVar6 = 0;
      }
      else if (0xff < (int)uVar6) {
        uVar6 = 0xff;
      }
      if ((uVar6 & 0xff) < (uint)DAT_001d0eac) goto LAB_00175ef8;
    }
    DAT_005b8956 = DAT_005b8956 | 0x400;
  }
  else {
LAB_00175ef8:
    DAT_005b8956 = DAT_005b8956 & 0xfbff;
  }
  if (B_st != '\0') {
    DAT_005b8958 = fho_w;
  }
  if (((((((DAT_005b8954 == '\0') || (B_fa != '\0')) || (B_katfz == '\0')) ||
        (((DAT_005b8956 & 0x400) == 0 && (_DAT_001d0f30 < _DAT_003fdc78)))) ||
       ((uVar2 < DAT_001d0ee7 && (B_wst != '\0')))) ||
      (((DAT_005b8956 & 0x100) != 0 || (DAT_005b8958 <= _DAT_001d0eea)))) || (B_hag == '\0')) {
    DAT_005b8956 = DAT_005b8956 & 0xffd7;
  }
  else if (B_stend == '\0') {
    DAT_005b8956 = DAT_005b8956 & 0xfff7 | 0x20;
  }
  else {
    DAT_005b8956 = DAT_005b8956 | 0x28;
  }
  if (DAT_005b8954 == '\0') {
    DAT_005b8956 = DAT_005b8956 | 0x280;
  }
  else {
    DAT_005b8956 = DAT_005b8956 & 0xfd7f;
  }
  if ((B_stend == '\0') || (ml <= DAT_001d0ec5)) {
    DAT_005bb852 = (ushort)DAT_001d0ee4;
    DAT_003f9ba4 = DAT_003f9ba4 & 0xfd;
  }
  else if (DAT_005bb852 == 0) {
    DAT_003f9ba4 = DAT_003f9ba4 | 2;
  }
  else {
    DAT_005bb852 = DAT_005bb852 - 1;
  }
  if ((B_kh == '\0') ||
     ((((((DAT_003f9ba4 & 2) == 0 && (B_fa == '\0')) &&
        ((B_msloff == '\0' ||
         ((B_slkhof != '\0' && (uVar3 = func_0xff21984c(&KFNFSKHM,tmst,kmstand), imlpr_w < uVar3))))
        )) && (uVar3 = func_0xff21984c(&KFNLLKHM,tmst,kmstand), tnst_w <= uVar3)) &&
      (((DAT_005b8956 & 4) == 0 && ((DAT_005b8956 & 0x100) == 0)))))) {
    B_khab = '\0';
  }
  else {
    B_khab = '\x01';
  }
  if ((fkhab != 0) && (B_khab != '\0')) {
    DAT_005bb856 = DAT_005bb854;
    uVar2 = func_0xff217fe8(DAT_001d0ee8,0,DAT_005bb854);
    DAT_005bb854 = (ushort)uVar2;
    if ((uint)DAT_005bb856 == (uVar2 & 0xffff)) {
      fkhab = fkhab - 1;
    }
    else {
      DAT_005bb854._0_1_ = (byte)(uVar2 >> 8);
      fkhab = DAT_005bb854._0_1_;
    }
  }
  if ((imlpr_w == 0xffff) || (fkhab <= DAT_001d0ead)) {
    DAT_005b8956 = DAT_005b8956 | 0x50;
  }
  else if (B_nmot == '\0') {
    DAT_005b8956 = DAT_005b8956 & 0xffbf | 0x10;
  }
  else {
    DAT_005b8956 = DAT_005b8956 & 0xffaf;
  }
  if ((DAT_005b8956 & 0x200) == 0) {
    if (B_khab == '\0') {
      local_48 = (undefined2)(((uint)imlatm_w << 10) >> 0x10);
      imlpr_w = func_0xff217b40(local_48,(uint)imlatm_w << 10 & 0xffff,DAT_005b8954);
      imlpr = (byte)(imlpr_w >> 8);
    }
  }
  else {
    imlpr = 0;
    imlpr_w = 0;
  }
  if ((DAT_005b8956 & 0x40) == 0) {
    if (((DAT_005b8956 & 0x20) != 0) && (B_nmot != '\0')) {
      B_kha = '\x01';
    }
  }
  else {
    B_kha = '\0';
  }
  if ((DAT_005b8956 & 0x10) == 0) {
    if ((DAT_005b8956 & 8) != 0) {
      B_kh = '\x01';
    }
  }
  else {
    B_kh = '\0';
  }
  if (B_kh == '\0') {
    DAT_005b9111 = 0;
  }
  else {
    if (_DAT_001d0f3e < tnst_w) {
      uVar2 = (uint)DAT_005b94e0 + (uint)_DAT_001d0f32;
      if (0xffff < uVar2) {
        uVar2 = 0xffff;
      }
      DAT_005b94e0 = (ushort)uVar2;
    }
    uVar3 = func_0xff2189bc(&DAT_001d0f0e,imlpr_w);
    if (DAT_005b94e0 < uVar3) {
      uVar3 = DAT_005b94e0;
    }
    DAT_005b9111 = (undefined)((uint)fkhab * (uint)uVar3 >> 0x10);
  }
  if (((((DAT_001d0ea9 & 1) == 0) || ((DAT_005b8956 & 1) == 0)) || ((DAT_005b8956 & 2) == 0)) &&
     (B_kha != '\0')) {
    DAT_003fc06d = '\x01';
    DAT_003fc06c = '\x01';
    DAT_005b94e4 = 0;
  }
  else {
    DAT_003fc06d = '\0';
    if ((DAT_005b94e4 < _DAT_001d0f3c) && (DAT_003fc06c != '\0')) {
      DAT_005b94e4 = DAT_005b94e4 + 1;
      uVar2 = func_0xff217b1c(DAT_005b94e4,0xffff,_DAT_001d0f3c);
      DAT_005b910e = (byte)(0xffff - (uVar2 & 0xffff) >> 8);
    }
    else {
      DAT_003fc06c = '\0';
    }
  }
  uVar2 = (uint)DAT_001d0ee2 + (uint)DAT_001d0eaa;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  uVar2 = (uVar2 & 0xff) - 10;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xff < (int)uVar2) {
    uVar2 = 0xff;
  }
  uVar6 = (uint)tkatm;
  if ((uVar2 & 0xff) < uVar6) {
    DAT_003f9ba4 = DAT_003f9ba4 | 1;
  }
  else if (uVar6 < DAT_001d0ee2) {
    DAT_003f9ba4 = DAT_003f9ba4 & 0xfe;
  }
  if (DAT_001d0ee3 <= uVar6) {
    DAT_003f9ba4 = DAT_003f9ba4 | 8;
  }
  if (((DAT_003fc06d == '\0') && ((DAT_003f9ba4 & 8) != 0)) && ((DAT_003f9ba4 & 1) == 0)) {
    B_kw = true;
  }
  else {
    B_kw = false;
  }
  if (((B_fs != '\0') && (B_stend != '\0')) && ((DAT_003f9ba4 & 4) == 0)) {
    if (DAT_005bb7bd == '\0') {
      DAT_003f9ba4 = DAT_003f9ba4 | 4;
    }
    else {
      DAT_005bb7bd = DAT_005bb7bd + -1;
    }
  }
  if ((B_bkvleer != '\0') && ((DAT_001d0ea9 & 0x10) != 0)) {
    DAT_003f9ba4 = DAT_003f9ba4 | 0x80;
  }
  if (((DAT_003fc06c == '\0') && (!(bool)B_kw)) || ((DAT_003f9ba4 & 0x80) != 0)) {
    uVar2 = 0;
    nfskh = 0;
  }
  else if ((DAT_003f9ba4 & 4) == 0) {
    uVar2 = func_0xff21ae98(&DAT_001c7c98,_DAT_001c0edc,DAT_005b9cf0,DAT_005b9c04);
    uVar4 = (uint)DAT_005b910e;
    uVar6 = func_0xff2187cc(&DAT_001d0eb0,imlpr);
    uVar2 = (int)(((int)(uVar4 * (uVar2 & 0xff)) >> 8) * (uVar6 & 0xff)) >> 7;
    uVar6 = func_0xff21ae98(&DAT_001c7c78,_DAT_001c0edc,DAT_005b9cf0,DAT_005b9c04);
    uVar5 = (uint)DAT_005b910e;
    uVar4 = func_0xff2187cc(&DAT_001d0eb0,imlpr);
    nfskh = (undefined)((int)(((int)(uVar5 * (uVar6 & 0xff)) >> 8) * (uVar4 & 0xff)) >> 7);
    if (0xff < uVar2) {
      uVar2 = 0xff;
      nfskh = 0xff;
    }
  }
  else {
    uVar2 = func_0xff21ae98(&DAT_001c7c78,_DAT_001c0edc,DAT_005b9cf0,DAT_005b9c04);
    uVar4 = (uint)DAT_005b910e;
    uVar6 = func_0xff2187cc(&DAT_001d0eb0,imlpr);
    uVar2 = (int)(((int)(uVar4 * (uVar2 & 0xff)) >> 8) * (uVar6 & 0xff)) >> 7;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    nfskh = (undefined)uVar2;
  }
  if (B_fasla == '\0') {
    nllkh = (undefined)uVar2;
  }
  else {
    nllkh = DAT_001d0ee1;
  }
  if (B_kh == '\0') {
    DAT_005bb85a = _DAT_001d0f38;
    DAT_005b8956 = DAT_005b8956 & 0xfffb;
  }
  else if (DAT_005bb85a == 0) {
    if ((DAT_005b8956 & 1) == 0) {
      DAT_005b8956 = DAT_005b8956 | 4;
    }
    else {
      DAT_005b8956 = DAT_005b8956 & 0xfffb;
    }
  }
  else {
    DAT_005bb85a = DAT_005bb85a + -1;
  }
  if ((((B_nmot == '\0') || (B_kha == '\0')) || (DAT_005bb7bf == '\0')) ||
     (((((DAT_005b8956 & 1) != 0 || (B_khab != '\0')) ||
       ((B_slsfz != '\0' && ((B_lmsslof != '\0' && (B_slpoff != '\0')))))) &&
      ((DAT_001d0ea9 & 0x80) == 0)))) {
    B_trkh = 0;
  }
  else {
    B_trkh = 1;
  }
  if (B_kh == '\0') {
    flakh = 0;
  }
  else {
    uVar2 = func_0xff2189bc(&DAT_001d0eec,imlpr_w);
    uVar4 = (uint)fkhab;
    uVar6 = func_0xff2187cc(&DAT_001d0ebc,tmot);
    local_44 = (byte)((uVar2 & 0xffff) * uVar4 * (uVar6 & 0xff) >> 0x18);
    flakh = local_44;
  }
  if (B_stend == '\0') {
    DAT_003f9ba4 = DAT_003f9ba4 & 0xbf;
  }
  else {
    DAT_003f9ba4 = DAT_003f9ba4 | 0x40;
  }
  return;
}

