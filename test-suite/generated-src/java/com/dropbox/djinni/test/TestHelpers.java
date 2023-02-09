// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from test.djinni

package com.dropbox.djinni.test;

import com.snapchat.djinni.NativeObjectManager;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.concurrent.atomic.AtomicBoolean;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

/**
 * Helper methods used by various different tests.
 * (Second line of multi-line documentation.
 *   Indented third line of multi-line documentation.)
 */
public abstract class TestHelpers {
    /** Method with documentation */
    @Nonnull
    public static native SetRecord getSetRecord();

    /**
     * Method with long documentation
     * (Second line of multi-line documentation.
     *   Indented third line of multi-line documentation.)
     */
    public static native boolean checkSetRecord(@Nonnull SetRecord rec);

    @Nonnull
    public static native PrimitiveList getPrimitiveList();

    public static native boolean checkPrimitiveList(@Nonnull PrimitiveList pl);

    @Nonnull
    public static native NestedCollection getNestedCollection();

    public static native boolean checkNestedCollection(@Nonnull NestedCollection nc);

    @Nonnull
    public static native HashMap<String, Long> getMap();

    public static native boolean checkMap(@Nonnull HashMap<String, Long> m);

    @Nonnull
    public static native HashMap<String, Long> getEmptyMap();

    public static native boolean checkEmptyMap(@Nonnull HashMap<String, Long> m);

    @Nonnull
    public static native MapListRecord getMapListRecord();

    public static native boolean checkMapListRecord(@Nonnull MapListRecord m);

    public static native void checkClientInterfaceAscii(@CheckForNull ClientInterface i);

    public static native void checkClientInterfaceNonascii(@CheckForNull ClientInterface i);

    public static native void checkClientInterfaceArgs(@CheckForNull ClientInterface i);

    public static native void checkEnumMap(@Nonnull HashMap<Color, String> m);

    public static native void checkEnum(@Nonnull Color c);

    @CheckForNull
    public static native UserToken tokenId(@CheckForNull UserToken t);

    @CheckForNull
    public static native UserToken createCppToken();

    public static native void checkCppToken(@CheckForNull UserToken t);

    public static native long cppTokenId(@CheckForNull UserToken t);

    public static native void checkTokenType(@CheckForNull UserToken t, @Nonnull String type);

    @CheckForNull
    public static native Integer returnNone();

    /** Ensures that we generate integer translation code */
    @Nonnull
    public static native AssortedPrimitives assortedPrimitivesId(@Nonnull AssortedPrimitives i);

    @Nonnull
    public static native byte[] idBinary(@Nonnull byte[] b);

    @Nonnull
    public static native com.snapchat.djinni.Future<Integer> getAsyncResult();

    @Nonnull
    public static native com.snapchat.djinni.Future<String> futureRoundtrip(@Nonnull com.snapchat.djinni.Future<Integer> f);

    @Nonnull
    public static native com.snapchat.djinni.Future<Integer> asyncEarlyThrow();

    @Nonnull
    public static native com.snapchat.djinni.Future<Void> voidAsyncMethod(@Nonnull com.snapchat.djinni.Future<Void> f);

    /**
     * If the input is empty, returns back an empty future.
     * If the input is non-empty, returns back the value plus one.
     */
    @Nonnull
    public static native com.snapchat.djinni.Future<Integer> addOneIfPresent(@Nonnull com.snapchat.djinni.Future<Integer> f);

    /** try-catches the future f, and accesses the error message, and returns as a string. */
    @Nonnull
    public static native com.snapchat.djinni.Future<String> returnExceptionString(@Nonnull com.snapchat.djinni.Future<Integer> f);

    @Nonnull
    public static native com.snapchat.djinni.Future<String> checkAsyncInterface(@CheckForNull AsyncInterface i);

    @Nonnull
    public static native com.snapchat.djinni.Future<String> checkAsyncComposition(@CheckForNull AsyncInterface i);

    @Nonnull
    public static native ArrayList<String> getOptionalList();

    public static native boolean checkOptionalList(@Nonnull ArrayList<String> ol);

    @Nonnull
    public static native HashSet<String> getOptionalSet();

    public static native boolean checkOptionalSet(@Nonnull HashSet<String> os);

    @Nonnull
    public static native HashMap<String, String> getOptionalMap();

    public static native boolean checkOptionalMap(@Nonnull HashMap<String, String> om);

    public static final class CppProxy extends TestHelpers
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
            NativeObjectManager.register(this, nativeRef);
        }
        public static native void nativeDestroy(long nativeRef);
    }
}
