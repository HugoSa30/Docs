/*
 * Program: n42.bin
 * Function: FUN_0017ae78
 * Entry: 0017ae78
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017ae78(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)genmanufak;
  if (((uVar2 != 0xff) && (gentypkenn != 0xff)) && (DAT_005b8ec4 != '\0')) {
    if (uVar2 < 4) {
      uVar2 = (uint)*(byte *)(uVar2 + 0x1cc40);
    }
    else {
      uVar2 = 0;
    }
    uVar2 = gentypkenn + uVar2;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    DAT_005b8aac = (undefined)uVar2;
    DAT_003fddc4 = (&DAT_001cacf0)[uVar2 & 0xff];
    DAT_005b8ec4 = '\0';
    B_genfkupl = (byte)(((uint)(byte)((DAT_003fddc4 < 8) << 3) << 8) >> 0xb) ^ 1;
  }
  uVar2 = (uint)DAT_003fddc4;
  if (uVar2 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0017af50 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar2 * 4 + 0xf7af5c))();
    return;
  }
  uVar3 = (uint)nmot_w * (uint)DAT_001cadae >> 7;
  if (0xffff < uVar3) {
    uVar3 = 0xffff;
  }
  DAT_005b9b08 = (undefined2)uVar3;
  if (uVar2 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0017affc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar2 * 4 + 0xf7b008))();
    return;
  }
  DAT_005b8aa9 = func_0xff21a054(DAT_001c9fc0,&DAT_001c9fc2,DAT_001c9fc1,0x1c9fca,&DAT_001c9fdc,ugen
                                );
  if (DAT_001cada3 == '\x01') {
    DAT_005b8a7e = (word)tmot;
  }
  else {
    DAT_005b8a7e = _DAT_001cad22;
    if (DAT_001cada3 != '\x02') {
      DAT_005b8a7e = gentemp;
    }
  }
  if (7 < DAT_003fddc4) {
    DAT_005b8aaa = func_0xff21a054(DAT_001ca2a0,&DAT_001ca2a2,DAT_001ca2a1,&DAT_001ca2a8,
                                   &DAT_001ca2b6);
    if (B_stend == '\0') {
      DAT_003fb406 = 0;
    }
    else if (DAT_003fb405 != '\0') {
      DAT_003fb406 = 1;
    }
    if (((B_gfmeak == 0) && (DAT_005b8ec2 == '\0')) &&
       ((ugen != 0 && ((B_stend != '\0' && (B_gfelak == 0)))))) {
      if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0017b398 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)DAT_003fddc4 * 4 + 0xf7b3a4))();
        return;
      }
      uVar2 = func_0xff2196d0(&DAT_001ca4a0,dffgen,DAT_005b8aaa);
    }
    else {
      uVar2 = 0;
    }
    iVar1 = (uVar2 & 0xff) << 5;
    DAT_005b8a6a = (undefined2)iVar1;
    func_0xff222514(&DAT_003fb3f4,iVar1,_DAT_001cad28);
    DAT_005b8a68 = (short)(_DAT_003fb3f4 >> 0x10);
    if (DAT_001cad9a == '\x01') {
      uVar2 = (uint)geni_end << 5;
    }
    else if ((B_gfbsupak == 0) && (B_gfnobsak == 0)) {
      uVar2 = (_DAT_003fb3f4 >> 0x10) + (uint)_DAT_001cad24;
    }
    else {
      uVar2 = ((uint)st_craweng + (uint)DAT_001cadba) * 0x20;
    }
    uVar2 = (uVar2 & 0xffff) >> 5;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    DAT_005b8ab2 = (byte)uVar2;
    genig = DAT_005b8ab2;
    if ((B_gfbsupak == 0) && (B_gfnobsak == 0)) {
      if (0xfd < (uVar2 & 0xff)) {
        DAT_005b8ab2 = 0xfe;
      }
    }
    else {
      DAT_005b8ab2 = 0xff;
    }
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x0017b1c4 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)DAT_003fddc4 * 4 + 0xf7b1d0))();
  return;
}

