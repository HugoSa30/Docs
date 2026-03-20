/*
 * Program: n42.bin
 * Function: FUN_001e4d74
 * Entry: 001e4d74
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e4d74(char *param_1)

{
  byte bVar1;
  char cVar3;
  uint uVar2;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  
  if (_DAT_00fe16d8 != 0) {
    puVar5 = (undefined4 *)&DAT_003fb848;
    iVar7 = _DAT_00fe16d8;
    do {
      puVar5[9] = _DAT_00fe16a0;
      puVar5 = puVar5 + 6;
      *puVar5 = 0;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  cVar3 = FUN_001e77ac();
  DAT_003fb8b4 = cVar3 == '\0';
  if (*param_1 == '@') {
    param_1[5] = DAT_003fb8b4 | ((byte)(_DAT_002fc004 >> 2) & 1) * '\x02';
    uVar6 = 0;
    uVar4 = 0;
    uVar2 = (uint)DAT_00fe16e2;
    if (uVar2 != 0) {
      do {
        bVar1 = *(byte *)(uVar6 * 0xf + 0xfe16e4);
        if (((bVar1 & 0x80) == 0x80) && ((DAT_00fe16e1 | 0x80) != bVar1)) {
          param_1[uVar4 + 1] = (&UNK_003fb809)[uVar6 * 2];
          if (2 < uVar4) break;
          uVar4 = uVar4 + 1 & 0xff;
        }
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < uVar2);
    }
  }
  _pm_akt = 0;
  cVar3 = FUN_001e3ecc(param_1,&DAT_003fbad2);
  if (cVar3 == '\0') {
    _pm_akt = 3;
  }
  else {
    FUN_001e4660(1);
    FUN_001e485c(&DAT_003fbad2);
    FUN_001e4660(2);
    if (_DAT_00fe16d8 == 0) {
      _pm_akt = 2;
      _DAT_003fb890 = 0;
    }
  }
  if (_pm_akt == 1) {
    _DAT_003fb854 = 0x80;
    *param_1 = 'A';
    param_1[5] = '\0';
    param_1[4] = '\0';
    param_1[3] = '\0';
    param_1[2] = '\0';
    param_1[1] = '\0';
    FUN_001e3934(0x41,param_1,0xfb);
  }
  else if (_pm_akt == 2) {
    if (_DAT_00fe16d8 < _DAT_003fb890) {
      *param_1 = -0x50;
    }
    _DAT_003fb854 = 1;
    FUN_001e3934(*param_1,param_1,0xfd);
    FUN_001e15cc();
  }
  else if (_pm_akt == 3) {
    _DAT_003fb854 = 2;
    FUN_001e3934(*param_1,param_1,0xfd);
    DAT_003fb898 = DAT_003fb898 | 1;
  }
  else {
    _DAT_003fb854 = 0x80;
  }
  if (_DAT_003fb854 == 1) {
    DAT_003fb898 = DAT_003fb898 | 2;
  }
  return;
}

