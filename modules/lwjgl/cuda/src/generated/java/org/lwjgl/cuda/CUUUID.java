/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
package org.lwjgl.cuda;

import javax.annotation.*;

import java.nio.*;

import org.lwjgl.*;
import org.lwjgl.system.*;

import static org.lwjgl.system.MemoryUtil.*;
import static org.lwjgl.system.MemoryStack.*;

/**
 * CUDA definition of UUID
 * 
 * <h3>Layout</h3>
 * 
 * <pre><code>
 * struct CUuuid {
 *     char bytes[16];
 * }</code></pre>
 */
@NativeType("struct CUuuid")
public class CUUUID extends Struct implements NativeResource {

    /** The struct size in bytes. */
    public static final int SIZEOF;

    /** The struct alignment in bytes. */
    public static final int ALIGNOF;

    /** The struct member offsets. */
    public static final int
        BYTES;

    static {
        Layout layout = __struct(
            __array(1, 16)
        );

        SIZEOF = layout.getSize();
        ALIGNOF = layout.getAlignment();

        BYTES = layout.offsetof(0);
    }

    /**
     * Creates a {@link CUUUID} instance at the current position of the specified {@link ByteBuffer} container. Changes to the buffer's content will be
     * visible to the struct instance and vice versa.
     *
     * <p>The created instance holds a strong reference to the container object.</p>
     */
    public CUUUID(ByteBuffer container) {
        super(memAddress(container), __checkContainer(container, SIZEOF));
    }

    @Override
    public int sizeof() { return SIZEOF; }

    /** Returns a {@link ByteBuffer} view of the {@code bytes} field. */
    @NativeType("char[16]")
    public ByteBuffer bytes() { return nbytes(address()); }
    /** Decodes the null-terminated string stored in the {@code bytes} field. */
    @NativeType("char[16]")
    public String bytesString() { return nbytesString(address()); }

    // -----------------------------------

    /** Returns a new {@link CUUUID} instance allocated with {@link MemoryUtil#memAlloc memAlloc}. The instance must be explicitly freed. */
    public static CUUUID malloc() {
        return wrap(CUUUID.class, nmemAllocChecked(SIZEOF));
    }

    /** Returns a new {@link CUUUID} instance allocated with {@link MemoryUtil#memCalloc memCalloc}. The instance must be explicitly freed. */
    public static CUUUID calloc() {
        return wrap(CUUUID.class, nmemCallocChecked(1, SIZEOF));
    }

    /** Returns a new {@link CUUUID} instance allocated with {@link BufferUtils}. */
    public static CUUUID create() {
        ByteBuffer container = BufferUtils.createByteBuffer(SIZEOF);
        return wrap(CUUUID.class, memAddress(container), container);
    }

    /** Returns a new {@link CUUUID} instance for the specified memory address. */
    public static CUUUID create(long address) {
        return wrap(CUUUID.class, address);
    }

    /** Like {@link #create(long) create}, but returns {@code null} if {@code address} is {@code NULL}. */
    @Nullable
    public static CUUUID createSafe(long address) {
        return address == NULL ? null : wrap(CUUUID.class, address);
    }

    /**
     * Returns a new {@link CUUUID.Buffer} instance allocated with {@link MemoryUtil#memAlloc memAlloc}. The instance must be explicitly freed.
     *
     * @param capacity the buffer capacity
     */
    public static CUUUID.Buffer malloc(int capacity) {
        return wrap(Buffer.class, nmemAllocChecked(__checkMalloc(capacity, SIZEOF)), capacity);
    }

    /**
     * Returns a new {@link CUUUID.Buffer} instance allocated with {@link MemoryUtil#memCalloc memCalloc}. The instance must be explicitly freed.
     *
     * @param capacity the buffer capacity
     */
    public static CUUUID.Buffer calloc(int capacity) {
        return wrap(Buffer.class, nmemCallocChecked(capacity, SIZEOF), capacity);
    }

    /**
     * Returns a new {@link CUUUID.Buffer} instance allocated with {@link BufferUtils}.
     *
     * @param capacity the buffer capacity
     */
    public static CUUUID.Buffer create(int capacity) {
        ByteBuffer container = __create(capacity, SIZEOF);
        return wrap(Buffer.class, memAddress(container), capacity, container);
    }

    /**
     * Create a {@link CUUUID.Buffer} instance at the specified memory.
     *
     * @param address  the memory address
     * @param capacity the buffer capacity
     */
    public static CUUUID.Buffer create(long address, int capacity) {
        return wrap(Buffer.class, address, capacity);
    }

    /** Like {@link #create(long, int) create}, but returns {@code null} if {@code address} is {@code NULL}. */
    @Nullable
    public static CUUUID.Buffer createSafe(long address, int capacity) {
        return address == NULL ? null : wrap(Buffer.class, address, capacity);
    }

    // -----------------------------------

    /** Returns a new {@link CUUUID} instance allocated on the thread-local {@link MemoryStack}. */
    public static CUUUID mallocStack() {
        return mallocStack(stackGet());
    }

    /** Returns a new {@link CUUUID} instance allocated on the thread-local {@link MemoryStack} and initializes all its bits to zero. */
    public static CUUUID callocStack() {
        return callocStack(stackGet());
    }

    /**
     * Returns a new {@link CUUUID} instance allocated on the specified {@link MemoryStack}.
     *
     * @param stack the stack from which to allocate
     */
    public static CUUUID mallocStack(MemoryStack stack) {
        return wrap(CUUUID.class, stack.nmalloc(ALIGNOF, SIZEOF));
    }

    /**
     * Returns a new {@link CUUUID} instance allocated on the specified {@link MemoryStack} and initializes all its bits to zero.
     *
     * @param stack the stack from which to allocate
     */
    public static CUUUID callocStack(MemoryStack stack) {
        return wrap(CUUUID.class, stack.ncalloc(ALIGNOF, 1, SIZEOF));
    }

    /**
     * Returns a new {@link CUUUID.Buffer} instance allocated on the thread-local {@link MemoryStack}.
     *
     * @param capacity the buffer capacity
     */
    public static CUUUID.Buffer mallocStack(int capacity) {
        return mallocStack(capacity, stackGet());
    }

    /**
     * Returns a new {@link CUUUID.Buffer} instance allocated on the thread-local {@link MemoryStack} and initializes all its bits to zero.
     *
     * @param capacity the buffer capacity
     */
    public static CUUUID.Buffer callocStack(int capacity) {
        return callocStack(capacity, stackGet());
    }

    /**
     * Returns a new {@link CUUUID.Buffer} instance allocated on the specified {@link MemoryStack}.
     *
     * @param stack the stack from which to allocate
     * @param capacity the buffer capacity
     */
    public static CUUUID.Buffer mallocStack(int capacity, MemoryStack stack) {
        return wrap(Buffer.class, stack.nmalloc(ALIGNOF, capacity * SIZEOF), capacity);
    }

    /**
     * Returns a new {@link CUUUID.Buffer} instance allocated on the specified {@link MemoryStack} and initializes all its bits to zero.
     *
     * @param stack the stack from which to allocate
     * @param capacity the buffer capacity
     */
    public static CUUUID.Buffer callocStack(int capacity, MemoryStack stack) {
        return wrap(Buffer.class, stack.ncalloc(ALIGNOF, capacity, SIZEOF), capacity);
    }

    // -----------------------------------

    /** Unsafe version of {@link #bytes}. */
    public static ByteBuffer nbytes(long struct) { return memByteBuffer(struct + CUUUID.BYTES, 16); }
    /** Unsafe version of {@link #bytesString}. */
    public static String nbytesString(long struct) { return memASCII(struct + CUUUID.BYTES); }

    // -----------------------------------

    /** An array of {@link CUUUID} structs. */
    public static class Buffer extends StructBuffer<CUUUID, Buffer> implements NativeResource {

        private static final CUUUID ELEMENT_FACTORY = CUUUID.create(-1L);

        /**
         * Creates a new {@link CUUUID.Buffer} instance backed by the specified container.
         *
         * Changes to the container's content will be visible to the struct buffer instance and vice versa. The two buffers' position, limit, and mark values
         * will be independent. The new buffer's position will be zero, its capacity and its limit will be the number of bytes remaining in this buffer divided
         * by {@link CUUUID#SIZEOF}, and its mark will be undefined.
         *
         * <p>The created buffer instance holds a strong reference to the container object.</p>
         */
        public Buffer(ByteBuffer container) {
            super(container, container.remaining() / SIZEOF);
        }

        public Buffer(long address, int cap) {
            super(address, null, -1, 0, cap, cap);
        }

        Buffer(long address, @Nullable ByteBuffer container, int mark, int pos, int lim, int cap) {
            super(address, container, mark, pos, lim, cap);
        }

        @Override
        protected Buffer self() {
            return this;
        }

        @Override
        protected CUUUID getElementFactory() {
            return ELEMENT_FACTORY;
        }

        /** Returns a {@link ByteBuffer} view of the {@code bytes} field. */
        @NativeType("char[16]")
        public ByteBuffer bytes() { return CUUUID.nbytes(address()); }
        /** Decodes the null-terminated string stored in the {@code bytes} field. */
        @NativeType("char[16]")
        public String bytesString() { return CUUUID.nbytesString(address()); }

    }

}