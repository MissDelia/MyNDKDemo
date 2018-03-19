package com.example.myndkdemo;

/**
 * Created by x5035 on 2018/3/19.
 */

public class Codec {

    static {
        System.loadLibrary("native-lib");
    }

    public static native String hexEncode(byte[] data);
    public static native byte[] hexDecode(String data);

}
