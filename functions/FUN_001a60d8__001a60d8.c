/*
 * Program: n42.bin
 * Function: FUN_001a60d8
 * Entry: 001a60d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001a60d8(void)

{
  undefined4 in_TBLr;
  
  ini2_predrive_Ctr = ini2_predrive_Ctr + 1;
  if (B_wakeup == 0) {
    func_0xff26c174(1,750000);
    func_0xff26a6bc(0x1ebd8);
    func_0xff26c174(2,5000);
    func_0xff26c174(3,10000);
    func_0xff26c3a4(in_TBLr);
    func_0xff26c3e8(0x1f2c0);
    func_0xff26c174(0,75000);
    DAT_003f9b79 = 0;
    func_0xff26b1cc(1,500,25000);
  }
  else {
    func_0xff26c174(1,750000);
    func_0xff26a6bc(0x1e56c);
    func_0xff26c174(2,5000);
    func_0xff26c174(3,10000);
    func_0xff26c3a4(in_TBLr);
    func_0xff26c174(0,75000);
    DAT_003f9b79 = 1;
    func_0xff26b1cc(1,500,25000);
  }
  return;
}

