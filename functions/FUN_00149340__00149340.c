/*
 * Program: n42.bin
 * Function: FUN_00149340
 * Entry: 00149340
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00149340(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ENUM_005b8b6c EVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  undefined uVar14;
  undefined4 uVar15;
  short sVar16;
  undefined uVar17;
  
  if ((DAT_005b961a & 0x200) == 0) {
    _DAT_003fdbae = 0;
    _DAT_003fdbb0 = 0;
    DAT_003fdbb5 = 0;
    DAT_003fdbb6 = 0;
    return;
  }
  if ((DAT_005b86e4 & 0x80) != 0) {
    return;
  }
  DAT_005b86eb = tikatm;
  if ((DAT_001cb343 & 1) != 0) {
    DAT_005b86eb = DAT_005b865d;
  }
  func_0xff222550(&DAT_005b810e,DAT_005b86eb,DAT_001cefee);
  if ((((DAT_005b86eb < DAT_001cefe3) || (DAT_001cefe1 < DAT_005b86eb)) &&
      ((DAT_005b86eb < DAT_001cefe2 || (DAT_001cefe0 < DAT_005b86eb)))) || (DAT_005b80b3 == '\0')) {
    DAT_005b80b2 = false;
  }
  else {
    DAT_005b80b2 = true;
  }
  if (((DAT_005b86eb < DAT_001cefe3) || (DAT_001cefe1 < DAT_005b86eb)) &&
     ((DAT_005b86eb < DAT_001cefe2 || (DAT_001cefe0 < DAT_005b86eb)))) {
    DAT_005b80b3 = '\x01';
  }
  else {
    DAT_005b80b3 = '\0';
  }
  if (((bool)DAT_005b80b2) &&
     (sVar16 = (ushort)DAT_005b86eb - (DAT_005b810e >> 8), DAT_005b86ed = (char)sVar16, sVar16 < 1))
  {
    DAT_005b86ed = -DAT_005b86ed;
  }
  DAT_005b86dc = func_0xff2189bc(0x1cef9a,DAT_005b86ed);
  uVar14 = DAT_005b8155;
  if (((DAT_005b86eb < DAT_001cefe3) || (DAT_001cefe1 < DAT_005b86eb)) &&
     ((DAT_005b86eb < DAT_001cefe2 || (DAT_001cefe0 < DAT_005b86eb)))) {
    uVar17 = 1;
  }
  else {
    uVar17 = 0;
  }
  DAT_005b8154 = DAT_005b8155;
  DAT_005b8155 = uVar17;
  DAT_005b8164 = func_0xff221f64(&DAT_005b8166,uVar14,DAT_005b86dc);
  func_0xff221cc0(&DAT_005b8148);
  if (DAT_005b8148 == '\0') {
    DAT_005b86ec = (byte)((ushort)DAT_005b86ee - (ushort)DAT_005b86eb);
    if ((short)((ushort)DAT_005b86ee - (ushort)DAT_005b86eb) < 1) {
      DAT_005b86ec = -DAT_005b86ec;
    }
    DAT_005b86ee = DAT_005b86eb;
    DAT_005b8148 = DAT_001cefde;
  }
  if ((DAT_005b86ec < DAT_001cefd8) ||
     (((DAT_005b86eb < DAT_001cefe3 || (DAT_001cefe1 < DAT_005b86eb)) &&
      ((DAT_005b86eb < DAT_001cefe2 || (DAT_001cefe0 < DAT_005b86eb)))))) {
    DAT_005b86e2 = DAT_005b86e2 & 0xef;
  }
  else {
    DAT_005b86e2 = DAT_005b86e2 | 0x10;
  }
  DAT_005b812c = func_0xff221f64(&DAT_005b812e,(DAT_005b86e2 & 0x10) != 0,
                                 (uint)DAT_005b86ec * (uint)DAT_001cefdd);
  if (B_fakat == '\0') {
    if ((DAT_005b812c == '\0') && (DAT_005b8164 == '\0')) goto LAB_00149748;
  }
  else if ((DAT_001cefe4 <= DAT_005b86eb) && (DAT_005b86eb <= DAT_001cefe6)) {
LAB_00149748:
    DAT_005b86e7 = DAT_005b86e7 & 0xf7;
    goto LAB_00149754;
  }
  DAT_005b86e7 = DAT_005b86e7 | 8;
LAB_00149754:
  if ((B_stend == '\0') || (DAT_005b8137 != '\0')) {
    DAT_005b8136 = false;
  }
  else {
    DAT_005b8136 = true;
  }
  DAT_005b8137 = B_stend;
  if (((bool)DAT_005b8136) && (DAT_005b8168 == 0)) {
    DAT_005b8168 = _DAT_001cefcc;
  }
  func_0xff221ce0(&DAT_005b8168);
  cVar13 = B_lr2;
  cVar12 = B_frmin2;
  cVar11 = B_frmax2;
  cVar10 = B_sbbvk2;
  cVar9 = B_edkvs2;
  bVar1 = DAT_003fdf49;
  if ((DAT_001cb343 & 1) != 0) {
    bVar1 = DAT_003fdf4b;
  }
  bVar2 = DAT_003fdf1b;
  if ((DAT_001cb343 & 1) != 0) {
    bVar2 = DAT_003fdf1d;
  }
  bVar3 = DAT_003fdf5b;
  if ((DAT_001cb343 & 1) != 0) {
    bVar3 = DAT_003fdf5d;
  }
  if ((DAT_003fdf5f & 1) == 0) {
    DAT_005b86e7 = DAT_005b86e7 & 0xbf;
  }
  else {
    DAT_005b86e7 = DAT_005b86e7 | 0x40;
  }
  bVar6 = DAT_003fdfa5 & 1;
  bVar7 = DAT_003fdfaf & 1;
  DAT_005b86e7 = DAT_005b86e7 & 0xdf;
  if ((DAT_003fdf61 & 1) == 0) {
    DAT_005b86e2 = DAT_005b86e2 & 0xbf;
  }
  else {
    DAT_005b86e2 = DAT_005b86e2 | 0x40;
  }
  bVar8 = DAT_003fdf25 & 1;
  bVar4 = DAT_003fdf61 >> 1;
  EVar5 = B_lamka & B_lrka2;
  if ((DAT_001cb343 & 1) == 0) {
    if (B_sbbhk == '\0') {
      DAT_005b86e2 = DAT_005b86e2 & 0xfe;
    }
    else {
      DAT_005b86e2 = DAT_005b86e2 | 1;
    }
  }
  else if (B_sbbhk2 == '\0') {
    DAT_005b86e2 = DAT_005b86e2 & 0xfe;
  }
  else {
    DAT_005b86e2 = DAT_005b86e2 | 1;
  }
  DAT_005b80bc = func_0xff221e78(&DAT_005b80bd,B_fakat,2);
  DAT_005b80c3 = func_0xff221f18(&DAT_005b80c4,B_fa,2);
  if ((((((B_mdarv == 0) && (B_mdkat == 0)) && (B_dsls == '\0')) &&
       (((B_sls == '\0' && (bVar6 == 0)) &&
        ((bVar7 == 0 && (((DAT_003fdf69 & 1) == 0 && ((B_silm & 1) == 0)))))))) &&
      ((B_sidk & 1) == 0)) &&
     (((((DAT_003fdfb9 & 1) == 0 && ((DAT_003fdfbb & 1) == 0)) && ((DAT_005b86e7 & 0x20) == 0)) &&
      ((bVar8 == 0 && ((DAT_005b86e2 & 0x40) == 0)))))) {
    DAT_005b86e2 = DAT_005b86e2 & 0xfd;
  }
  else {
    DAT_005b86e2 = DAT_005b86e2 | 2;
  }
  if (((((((DAT_005b86e2 & 1) == 0) || ((DAT_005b86e9 & 0x80) != 0)) ||
        (((B_lr == '\0' || (((B_edkvs != '\0' || (B_frmax != '\0')) || (B_frmin != '\0')))) ||
         (((DAT_005b80c3 != '\0' && (DAT_005b80bc == '\0')) || ((DAT_005b961a & 0x400) == 0)))))) ||
       ((B_fakat != '\0' || (B_mdarv != 0)))) ||
      ((((B_mdkat != 0 || (((B_dsls != '\0' || (B_sls != '\0')) || (bVar6 != 0)))) ||
        (((bVar7 != 0 || ((DAT_003fdf69 & 1) != 0)) ||
         (((B_silm & 1) != 0 ||
          ((((B_sidk & 1) != 0 || ((DAT_003fdfb9 & 1) != 0)) ||
           (((DAT_003fdfbb & 1) != 0 ||
            ((((((DAT_005b86e7 & 0x20) != 0 || (bVar8 != 0)) || ((DAT_005b86e2 & 0x40) != 0)) ||
              (((DAT_005b86e7 & 0x40) != 0 || ((DAT_003fdf23 & 1) != 0)))) || ((bVar2 & 1) != 0)))))
           ))))))) || (((bVar3 & 1) != 0 || ((bVar1 & 1) != 0)))))) ||
     ((cVar13 == '\0' ||
      ((((cVar12 != '\0' || (cVar11 != '\0')) || (cVar10 == '\0')) || (cVar9 != '\0')))))) {
    DAT_005b86e2 = DAT_005b86e2 | 4;
  }
  else {
    DAT_005b86e2 = DAT_005b86e2 & 0xfb;
  }
  if ((((((DAT_005b80bc == '\0') && ((DAT_005b961a & 0x400) == 0)) ||
        ((B_tehb != '\0' || ((B_dtes != '\0' || (B_ukg != '\0')))))) || (B_mdarv != 0)) ||
      ((((B_mdkat != 0 || (B_dsls != '\0')) || (B_sls != '\0')) || ((bVar6 != 0 || (bVar7 != 0))))))
     || (((((DAT_003fdf69 & 1) != 0 || (((B_silm & 1) != 0 || ((B_sidk & 1) != 0)))) ||
          ((DAT_003fdfb9 & 1) != 0)) ||
         (((((DAT_003fdfbb & 1) != 0 || ((DAT_005b86e7 & 0x20) != 0)) || (bVar8 != 0)) ||
          ((DAT_005b86e2 & 0x40) != 0)))))) {
    DAT_005b86e7 = DAT_005b86e7 | 1;
  }
  else {
    DAT_005b86e7 = DAT_005b86e7 & 0xfe;
  }
  if (((B_vekatv & B_dktsps) ==
       ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi)) ||
     (DAT_005b8152 != '\0')) {
    DAT_005b8151 = '\0';
  }
  else {
    DAT_005b8151 = '\x01';
  }
  DAT_005b8152 = '\x01' - ((B_vekatv & B_dktsps) ==
                          ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi));
  if ((DAT_005b8151 != '\0') && (DAT_005b80c5 == '\0')) {
    DAT_005b80c5 = '\x03';
  }
  func_0xff221cc0(&DAT_005b80c5);
  if (((B_vekatv & B_dktsps) ==
       ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi)) ||
     (((bVar4 & 1) != 0 && ((DAT_003fdf5f >> 1 & 1) != 0)))) {
    uVar15 = 0;
  }
  else {
    uVar15 = 1;
  }
  DAT_005b8119 = func_0xff221f18(&DAT_005b811a,uVar15,3);
  if ((((((DAT_005b86e2 & 1) == 0) || ((DAT_005b86e9 & 0x80) != 0)) || (B_lr == '\0')) ||
      ((((B_edkvs != '\0' || (B_frmax != '\0')) ||
        ((B_frmin != '\0' || ((DAT_005b80c3 != '\0' && (DAT_005b80bc == '\0')))))) ||
       ((DAT_001cefd2 != '\0' && (((B_lamka & B_lrka) != 0 || (EVar5 != 0)))))))) ||
     (((((DAT_005b86e7 & 1) != 0 || (((cVar13 == '\0' || (cVar12 != '\0')) || (cVar11 != '\0')))) ||
       (((cVar10 == '\0' || (cVar9 != '\0')) || ((DAT_005b86e7 & 0x40) != 0)))) ||
      ((((DAT_003fdf23 & 1) != 0 || ((bVar2 & 1) != 0)) ||
       (((bVar3 & 1) != 0 ||
        ((((bVar1 & 1) != 0 || (DAT_005b80c5 != '\0')) || (DAT_005b8119 != '\0')))))))))) {
    DAT_005b86e7 = DAT_005b86e7 | 2;
  }
  else {
    DAT_005b86e7 = DAT_005b86e7 & 0xfd;
  }
  DAT_005b86da = DAT_005b868a;
  if ((DAT_001cb343 & 1) != 0) {
    DAT_005b86da = DAT_005b8688;
  }
  DAT_005b86ce = func_0xff21984c(&DAT_001ceef6,DAT_005b86da,msabg_w);
  DAT_005b86b0 = _DAT_001cefac;
  if ((B_fakat2 == '\0') && (B_fakat == '\0')) {
    DAT_005b86b0 = 0;
  }
                    /* WARNING: Read-only address (ram,0x003fde89) is written */
                    /* WARNING: Read-only address (ram,0x003fdf1b) is written */
                    /* WARNING: Read-only address (ram,0x003fdf1d) is written */
                    /* WARNING: Read-only address (ram,0x003fdf23) is written */
                    /* WARNING: Read-only address (ram,0x003fdf25) is written */
                    /* WARNING: Read-only address (ram,0x003fdf49) is written */
                    /* WARNING: Read-only address (ram,0x003fdf4b) is written */
                    /* WARNING: Read-only address (ram,0x003fdf59) is written */
                    /* WARNING: Read-only address (ram,0x003fdf5b) is written */
                    /* WARNING: Read-only address (ram,0x003fdf5d) is written */
                    /* WARNING: Read-only address (ram,0x003fdf5f) is written */
                    /* WARNING: Read-only address (ram,0x003fdf61) is written */
                    /* WARNING: Read-only address (ram,0x003fdf69) is written */
                    /* WARNING: Read-only address (ram,0x003fdfa5) is written */
                    /* WARNING: Read-only address (ram,0x003fdfaf) is written */
                    /* WARNING: Read-only address (ram,0x003fdfb9) is written */
                    /* WARNING: Read-only address (ram,0x003fdfbb) is written */
  return;
}

