/*
 * Program: n42.bin
 * Function: FUN_000ce584
 * Entry: 000ce584
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ce584(void)

{
  uint uVar1;
  char cVar2;
  uint local_10;
  undefined4 local_c;
  
  local_10 = _DAT_003f9a94;
  local_c = _DAT_003f9a98;
  cVar2 = func_0x010339ac(4,&local_10);
  if (cVar2 == '\0') {
    DAT_005bb786 = '\x01';
  }
  if (DAT_005bb786 == '\0') {
    if (DAT_005bb7de < 0x1f5) {
      DAT_005bb7de = DAT_005bb7de + 1;
    }
    else {
      DAT_005b8c62 = 0;
      B_pwml2cok = 0;
      trmin_w = 0;
      DAT_005b9001 = 0;
      DAT_005b8ffd = 0;
    }
    DAT_003fbebd = 0;
  }
  else {
    DAT_005bb7de = 0;
    DAT_005bb786 = '\0';
    kmstand = (word)local_10;
    DAT_005b9001 = (byte)(local_10 >> 0x10) & 0x7f;
    if ((local_10 >> 0x17 & 1) == 0) {
      DAT_003fd7e8 = DAT_003fd7e8 & 0xfe;
    }
    else {
      DAT_003fd7e8 = DAT_003fd7e8 | 1;
    }
    uVar1 = local_10 >> 0x18;
    func_0x010339ac(5,&local_10);
    trmin_w = (ushort)(local_10 << 8) | (ushort)(byte)uVar1;
    DAT_005b8ffd = (byte)((local_10 >> 8) << 1) & 0x7e;
    DAT_003fbebd = 1;
    DAT_005b8c62 = 1;
    B_pwml2cok = 1;
  }
  cVar2 = func_0x010339ac(6,&local_10);
  if (cVar2 == '\0') {
    DAT_005bb787 = '\x01';
  }
  if (DAT_005bb787 == '\0') {
    if (DAT_005bb785 < 0xc9) {
      DAT_005bb785 = DAT_005bb785 + 1;
    }
    else {
      B_ins3cok = 0;
      func_0x00fba8d0();
    }
    DAT_003fbebf = 0;
  }
  else {
    DAT_005bb785 = 0;
    DAT_005bb787 = '\0';
    DAT_005b8fff = (byte)local_10 & 0x1f;
    DAT_003fbec2 = '\x01' - ((local_10 >> 5 & 1) == 0);
    B_ko = '\x01' - ((local_10 >> 6 & 1) == 0);
    B_ac = '\x01' - ((local_10 >> 7 & 1) == 0);
    DAT_003fbebb = '\x01' - ((local_10 >> 8 & 1) == 0);
    DAT_003fbec3 = '\x01' - ((local_10 >> 10 & 1) == 0);
    DAT_005b9000 = (byte)(local_10 >> 0xc) & 0xf;
    DAT_005b8ffe = (byte)(local_10 >> 0x10) & 0x3f;
    DAT_003fbec4 = (byte)(local_10 >> 0x16) & 1;
    DAT_005b9002 = (byte)(local_10 >> 0x18);
    if (0x7f < local_10 >> 0x18) {
      DAT_005b9002 = ~(DAT_005b9002 + 0x7f);
    }
    func_0x010339ac(7,&local_10);
    ekpausc = (byte)(local_10 >> 0xb) & 3;
    DAT_003fbebf = 1;
    B_ins3cok = 1;
    if (B_ac != '\0') {
      DAT_003fd7e9 = 0x55;
      B_kovar = 1;
    }
  }
  if (DAT_003fddad != '\0') {
    B_kovar = 0;
    DAT_003fd7e9 = 0;
  }
  return;
}

