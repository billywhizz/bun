/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSDOMFormData.h"

#include "ActiveDOMObject.h"
#include "DOMClientIsoSubspaces.h"
#include "DOMIsoSubspaces.h"
#include "IDLTypes.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructor.h"
#include "JSDOMConvertBase.h"
#include "JSDOMConvertBoolean.h"
#include "JSDOMConvertInterface.h"
#include "JSDOMConvertNullable.h"
#include "JSDOMConvertSequences.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMConvertUnion.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObject.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMIterator.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "ScriptExecutionContext.h"
#include "WebCoreJSClientData.h"
#include <JavaScriptCore/BuiltinNames.h>
#include <JavaScriptCore/FunctionPrototype.h>
#include <JavaScriptCore/HeapAnalyzer.h>
#include <JavaScriptCore/JSArray.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <variant>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>
#include "ZigGeneratedClasses.h"
#include "GCDefferalContext.h"

namespace WebCore {
using namespace JSC;

struct JSBlobWrapperConverter {
    static RefPtr<Blob> toWrapped(JSC::JSGlobalObject& lexicalGlobalObject, JSC::JSValue value)
    {
        auto* globalObject = JSC::jsDynamicCast<JSDOMGlobalObject*>(&lexicalGlobalObject);
        if (!globalObject)
            return nullptr;

        auto* readableStream = JSC::jsDynamicCast<JSBlob*>(value);
        if (!readableStream)
            return nullptr;

        return Blob::create(value);
    }
};

template<> struct JSDOMWrapperConverterTraits<Blob> {
    using WrapperClass = JSBlobWrapperConverter;
    using ToWrappedReturnType = RefPtr<Blob>;
    static constexpr bool needsState = true;
};

template<> struct Converter<IDLInterface<Blob>> : DefaultConverter<IDLInterface<Blob>> {
    static RefPtr<Blob> convert(JSC::JSGlobalObject& lexicalGlobalObject, JSC::JSValue value, JSDOMGlobalObject& globalObject)
    {
        return JSBlobWrapperConverter::toWrapped(lexicalGlobalObject, value);
    }
};

// Functions

static JSC_DECLARE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_append);
static JSC_DECLARE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_delete);
static JSC_DECLARE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_get);
static JSC_DECLARE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_getAll);
static JSC_DECLARE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_has);
static JSC_DECLARE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_set);
static JSC_DECLARE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_entries);
static JSC_DECLARE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_keys);
static JSC_DECLARE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_values);
static JSC_DECLARE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_forEach);

// Non-standard functions
static JSC_DECLARE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_toJSON);

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsDOMFormDataConstructor);

JSC_DEFINE_CUSTOM_GETTER(jsDOMFormDataPrototype_getLength, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName))
{
    VM& vm = JSC::getVM(lexicalGlobalObject);
    auto* thisObject = jsDynamicCast<JSDOMFormData*>(JSValue::decode(thisValue));
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    if (UNLIKELY(!thisObject))
        return throwVMTypeError(lexicalGlobalObject, throwScope);

    size_t length = thisObject->wrapped().count();
    return JSValue::encode(jsNumber(length));
}

class JSDOMFormDataPrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSDOMFormDataPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDOMFormDataPrototype* ptr = new (NotNull, JSC::allocateCell<JSDOMFormDataPrototype>(vm)) JSDOMFormDataPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSDOMFormDataPrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSDOMFormDataPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSDOMFormDataPrototype, JSDOMFormDataPrototype::Base);

using JSDOMFormDataDOMConstructor = JSDOMConstructor<JSDOMFormData>;

template<> JSC::EncodedJSValue JSC_HOST_CALL_ATTRIBUTES JSDOMFormDataDOMConstructor::construct(JSGlobalObject* lexicalGlobalObject, CallFrame* callFrame)
{
    VM& vm = lexicalGlobalObject->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* castedThis = jsCast<JSDOMFormDataDOMConstructor*>(callFrame->jsCallee());
    ASSERT(castedThis);
    auto* context = castedThis->scriptExecutionContext();
    if (UNLIKELY(!context))
        return throwConstructorScriptExecutionContextUnavailableError(*lexicalGlobalObject, throwScope, "FormData"_s);
    auto object = DOMFormData::create(context);
    if constexpr (IsExceptionOr<decltype(object)>)
        RETURN_IF_EXCEPTION(throwScope, {});
    static_assert(TypeOrExceptionOrUnderlyingType<decltype(object)>::isRef);
    auto jsValue = toJSNewlyCreated<IDLInterface<DOMFormData>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, WTFMove(object));
    if constexpr (IsExceptionOr<decltype(object)>)
        RETURN_IF_EXCEPTION(throwScope, {});
    setSubclassStructureIfNeeded<DOMFormData>(lexicalGlobalObject, callFrame, asObject(jsValue));
    RETURN_IF_EXCEPTION(throwScope, {});
    return JSValue::encode(jsValue);
}
JSC_ANNOTATE_HOST_FUNCTION(JSDOMFormDataDOMConstructorConstruct, JSDOMFormDataDOMConstructor::construct);

template<> const ClassInfo JSDOMFormDataDOMConstructor::s_info = { "FormData"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSDOMFormDataDOMConstructor) };

template<> JSValue JSDOMFormDataDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

BUN_DECLARE_HOST_FUNCTION(FormData__jsFunctionFromMultipartData);

template<> void JSDOMFormDataDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "FormData"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSDOMFormData::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
    putDirectNativeFunction(vm, &globalObject, vm.propertyNames->from, 1, FormData__jsFunctionFromMultipartData, ImplementationVisibility::Public, NoIntrinsic, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontDelete | 0);
}

/* Hash table for prototype */

static const HashTableValue JSDOMFormDataPrototypeTableValues[] = {
    { "constructor"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMFormDataConstructor, 0 } },
    { "append"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsDOMFormDataPrototypeFunction_append, 2 } },
    { "delete"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsDOMFormDataPrototypeFunction_delete, 1 } },
    { "get"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsDOMFormDataPrototypeFunction_get, 1 } },
    { "getAll"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsDOMFormDataPrototypeFunction_getAll, 1 } },
    { "has"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsDOMFormDataPrototypeFunction_has, 1 } },
    { "set"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsDOMFormDataPrototypeFunction_set, 2 } },
    { "entries"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsDOMFormDataPrototypeFunction_entries, 0 } },
    { "keys"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsDOMFormDataPrototypeFunction_keys, 0 } },
    { "values"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsDOMFormDataPrototypeFunction_values, 0 } },
    { "forEach"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsDOMFormDataPrototypeFunction_forEach, 1 } },
    { "toJSON"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function | PropertyAttribute::DontDelete | PropertyAttribute::ReadOnly), NoIntrinsic, { HashTableValue::NativeFunctionType, jsDOMFormDataPrototypeFunction_toJSON, 1 } },
    { "length"_s, static_cast<unsigned>(JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontDelete | JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsDOMFormDataPrototype_getLength, 0 } }
};

const ClassInfo JSDOMFormDataPrototype::s_info = { "FormData"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSDOMFormDataPrototype) };

void JSDOMFormDataPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSDOMFormData::info(), JSDOMFormDataPrototypeTableValues, *this);
    putDirect(vm, vm.propertyNames->iteratorSymbol, getDirect(vm, vm.propertyNames->builtinNames().entriesPublicName()), static_cast<unsigned>(JSC::PropertyAttribute::DontEnum));
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSDOMFormData::s_info = { "FormData"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSDOMFormData) };

JSDOMFormData::JSDOMFormData(Structure* structure, JSDOMGlobalObject& globalObject, Ref<DOMFormData>&& impl)
    : JSDOMWrapper<DOMFormData>(structure, globalObject, WTFMove(impl))
{
}

void JSDOMFormData::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));

    // static_assert(!std::is_base_of<ActiveDOMObject, DOMFormData>::value, "Interface is not marked as [ActiveDOMObject] even though implementation class subclasses ActiveDOMObject.");
}

JSObject* JSDOMFormData::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    auto* structure = JSDOMFormDataPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype());
    structure->setMayBePrototype(true);
    return JSDOMFormDataPrototype::create(vm, &globalObject, structure);
}

JSObject* JSDOMFormData::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSDOMFormData>(vm, globalObject);
}

JSValue JSDOMFormData::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMFormDataDOMConstructor, DOMConstructorID::DOMFormData>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSDOMFormData::destroy(JSC::JSCell* cell)
{
    JSDOMFormData* thisObject = static_cast<JSDOMFormData*>(cell);
    thisObject->JSDOMFormData::~JSDOMFormData();
}

JSC_DEFINE_CUSTOM_GETTER(jsDOMFormDataConstructor, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName))
{
    VM& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSDOMFormDataPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSDOMFormData::getConstructor(JSC::getVM(lexicalGlobalObject), prototype->globalObject()));
}

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_append1Body(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSDOMFormData>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto name = convert<IDLUSVString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    EnsureStillAliveScope argument1 = callFrame->uncheckedArgument(1);
    auto value = convert<IDLUSVString>(*lexicalGlobalObject, argument1.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.append(WTFMove(name), WTFMove(value)); })));
}

extern "C" BunString Blob__getFileNameString(void* impl);

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_append2Body(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSDOMFormData>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto name = convert<IDLUSVString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    EnsureStillAliveScope argument1 = callFrame->uncheckedArgument(1);

    RefPtr<Blob> blobValue = nullptr;
    if (argument1.value().inherits<JSBlob>()) {
        blobValue = Blob::create(argument1.value());
    }

    if (!blobValue) {
        throwTypeError(lexicalGlobalObject, throwScope, "Expected argument to be a Blob."_s);
    }
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());

    EnsureStillAliveScope argument2 = callFrame->argument(2);
    auto filename = argument2.value().isUndefined() ? Blob__getFileNameString(blobValue->impl()).toWTFString(BunString::ZeroCopy) : convert<IDLUSVString>(*lexicalGlobalObject, argument2.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());

    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.append(WTFMove(name), WTFMove(blobValue), WTFMove(filename)); })));
}

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_appendOverloadDispatcher(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSDOMFormData>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    size_t argsCount = std::min<size_t>(3, callFrame->argumentCount());
    if (argsCount == 2) {
        JSValue distinguishingArg = callFrame->uncheckedArgument(1);
        if (distinguishingArg.isObject() && asObject(distinguishingArg)->inherits<JSBlob>())
            RELEASE_AND_RETURN(throwScope, (jsDOMFormDataPrototypeFunction_append2Body(lexicalGlobalObject, callFrame, castedThis)));
        RELEASE_AND_RETURN(throwScope, (jsDOMFormDataPrototypeFunction_append1Body(lexicalGlobalObject, callFrame, castedThis)));
    }
    if (argsCount == 3) {
        RELEASE_AND_RETURN(throwScope, (jsDOMFormDataPrototypeFunction_append2Body(lexicalGlobalObject, callFrame, castedThis)));
    }
    return argsCount < 2 ? throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject)) : throwVMTypeError(lexicalGlobalObject, throwScope);
}

JSC_DEFINE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_append, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSDOMFormData>::call<jsDOMFormDataPrototypeFunction_appendOverloadDispatcher>(*lexicalGlobalObject, *callFrame, "append");
}

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_deleteBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSDOMFormData>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(callFrame->argumentCount() < 1))
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto name = convert<IDLUSVString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.remove(WTFMove(name)); })));
}

JSC_DEFINE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_delete, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSDOMFormData>::call<jsDOMFormDataPrototypeFunction_deleteBody>(*lexicalGlobalObject, *callFrame, "delete");
}

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_getBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSDOMFormData>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(callFrame->argumentCount() < 1))
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto name = convert<IDLUSVString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLNullable<IDLUnion<IDLUSVString, IDLInterface<Blob>>>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, impl.get(WTFMove(name)))));
}

JSC_DEFINE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_get, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSDOMFormData>::call<jsDOMFormDataPrototypeFunction_getBody>(*lexicalGlobalObject, *callFrame, "get");
}

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_getAllBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSDOMFormData>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(callFrame->argumentCount() < 1))
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto name = convert<IDLUSVString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    auto entries = impl.getAll(WTFMove(name));
    JSC::JSArray* result = JSC::constructEmptyArray(lexicalGlobalObject, nullptr, 0);
    for (auto entry : entries) {
        if (auto string = std::get_if<String>(&entry)) {
            result->push(lexicalGlobalObject, jsString(vm, *string));
        } else {
            auto blob = std::get<RefPtr<Blob>>(entry);
            result->push(lexicalGlobalObject, toJS(lexicalGlobalObject, castedThis->globalObject(), blob.get()));
        }
    }

    RELEASE_AND_RETURN(throwScope, JSValue::encode(result));
}

JSC_DEFINE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_getAll, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSDOMFormData>::call<jsDOMFormDataPrototypeFunction_getAllBody>(*lexicalGlobalObject, *callFrame, "getAll");
}

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_hasBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSDOMFormData>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(callFrame->argumentCount() < 1))
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto name = convert<IDLUSVString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLBoolean>(*lexicalGlobalObject, throwScope, impl.has(WTFMove(name)))));
}

JSC_DEFINE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_has, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSDOMFormData>::call<jsDOMFormDataPrototypeFunction_hasBody>(*lexicalGlobalObject, *callFrame, "has");
}

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_set1Body(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSDOMFormData>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto name = convert<IDLUSVString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    EnsureStillAliveScope argument1 = callFrame->uncheckedArgument(1);
    auto value = convert<IDLUSVString>(*lexicalGlobalObject, argument1.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.set(WTFMove(name), WTFMove(value)); })));
}

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_set2Body(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSDOMFormData>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto name = convert<IDLUSVString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    EnsureStillAliveScope argument1 = callFrame->uncheckedArgument(1);

    RefPtr<Blob> blobValue = nullptr;
    if (argument1.value().inherits<JSBlob>()) {
        blobValue = Blob::create(argument1.value());
    }

    if (!blobValue) {
        throwTypeError(lexicalGlobalObject, throwScope, "Expected argument to be a Blob."_s);
    }
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());

    EnsureStillAliveScope argument2 = callFrame->argument(2);
    auto filename = argument2.value().isUndefined() ? Blob__getFileNameString(blobValue->impl()).toWTFString(BunString::ZeroCopy) : convert<IDLUSVString>(*lexicalGlobalObject, argument2.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());

    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.set(WTFMove(name), WTFMove(blobValue), WTFMove(filename)); })));
}

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_setOverloadDispatcher(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSDOMFormData>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    size_t argsCount = std::min<size_t>(3, callFrame->argumentCount());
    if (argsCount == 2) {
        JSValue distinguishingArg = callFrame->uncheckedArgument(1);
        if (distinguishingArg.isObject() && asObject(distinguishingArg)->inherits<JSBlob>())
            RELEASE_AND_RETURN(throwScope, (jsDOMFormDataPrototypeFunction_set2Body(lexicalGlobalObject, callFrame, castedThis)));
        RELEASE_AND_RETURN(throwScope, (jsDOMFormDataPrototypeFunction_set1Body(lexicalGlobalObject, callFrame, castedThis)));
    }
    if (argsCount == 3) {
        RELEASE_AND_RETURN(throwScope, (jsDOMFormDataPrototypeFunction_set2Body(lexicalGlobalObject, callFrame, castedThis)));
    }
    return argsCount < 2 ? throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject)) : throwVMTypeError(lexicalGlobalObject, throwScope);
}

JSC_DEFINE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_set, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSDOMFormData>::call<jsDOMFormDataPrototypeFunction_setOverloadDispatcher>(*lexicalGlobalObject, *callFrame, "set");
}

/**
 * Non standard function.
 **/
static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_toJSONBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSDOMFormData>::ClassParameter castedThis)
{
    return JSValue::encode(getInternalProperties(lexicalGlobalObject->vm(), lexicalGlobalObject, castedThis));
}

JSC_DEFINE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_toJSON, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSDOMFormData>::call<jsDOMFormDataPrototypeFunction_toJSONBody>(*lexicalGlobalObject, *callFrame, "toJSON");
}

struct DOMFormDataIteratorTraits {
    static constexpr JSDOMIteratorType type = JSDOMIteratorType::Map;
    using KeyType = IDLUSVString;
    using ValueType = IDLUnion<IDLUSVString, IDLInterface<Blob>>;
};

using DOMFormDataIteratorBase = JSDOMIteratorBase<JSDOMFormData, DOMFormDataIteratorTraits>;
class DOMFormDataIterator final : public DOMFormDataIteratorBase {
public:
    using Base = DOMFormDataIteratorBase;
    DECLARE_INFO;

    template<typename, SubspaceAccess mode> static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        if constexpr (mode == JSC::SubspaceAccess::Concurrently)
            return nullptr;
        return WebCore::subspaceForImpl<DOMFormDataIterator, UseCustomHeapCellType::No>(
            vm,
            [](auto& spaces) { return spaces.m_clientSubspaceForDOMFormDataIterator.get(); },
            [](auto& spaces, auto&& space) { spaces.m_clientSubspaceForDOMFormDataIterator = std::forward<decltype(space)>(space); },
            [](auto& spaces) { return spaces.m_subspaceForDOMFormDataIterator.get(); },
            [](auto& spaces, auto&& space) { spaces.m_subspaceForDOMFormDataIterator = std::forward<decltype(space)>(space); });
    }

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static DOMFormDataIterator* create(JSC::VM& vm, JSC::Structure* structure, JSDOMFormData& iteratedObject, IterationKind kind)
    {
        auto* instance = new (NotNull, JSC::allocateCell<DOMFormDataIterator>(vm)) DOMFormDataIterator(structure, iteratedObject, kind);
        instance->finishCreation(vm);
        return instance;
    }

private:
    DOMFormDataIterator(JSC::Structure* structure, JSDOMFormData& iteratedObject, IterationKind kind)
        : Base(structure, iteratedObject, kind)
    {
    }
};

using DOMFormDataIteratorPrototype = JSDOMIteratorPrototype<JSDOMFormData, DOMFormDataIteratorTraits>;
JSC_ANNOTATE_HOST_FUNCTION(DOMFormDataIteratorPrototypeNext, DOMFormDataIteratorPrototype::next);

template<>
const JSC::ClassInfo DOMFormDataIteratorBase::s_info = { "FormDataBase Iterator"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(DOMFormDataIteratorBase) };
const JSC::ClassInfo DOMFormDataIterator::s_info = { "FormData Iterator"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(DOMFormDataIterator) };

template<>
const JSC::ClassInfo DOMFormDataIteratorPrototype::s_info = { "FormData Iterator"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(DOMFormDataIteratorPrototype) };

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_entriesCaller(JSGlobalObject*, CallFrame*, JSDOMFormData* thisObject)
{
    return JSValue::encode(iteratorCreate<DOMFormDataIterator>(*thisObject, IterationKind::Entries));
}

JSC_DEFINE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_entries, (JSC::JSGlobalObject * lexicalGlobalObject, JSC::CallFrame* callFrame))
{
    return IDLOperation<JSDOMFormData>::call<jsDOMFormDataPrototypeFunction_entriesCaller>(*lexicalGlobalObject, *callFrame, "entries");
}

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_keysCaller(JSGlobalObject*, CallFrame*, JSDOMFormData* thisObject)
{
    return JSValue::encode(iteratorCreate<DOMFormDataIterator>(*thisObject, IterationKind::Keys));
}

JSC_DEFINE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_keys, (JSC::JSGlobalObject * lexicalGlobalObject, JSC::CallFrame* callFrame))
{
    return IDLOperation<JSDOMFormData>::call<jsDOMFormDataPrototypeFunction_keysCaller>(*lexicalGlobalObject, *callFrame, "keys");
}

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_valuesCaller(JSGlobalObject*, CallFrame*, JSDOMFormData* thisObject)
{
    return JSValue::encode(iteratorCreate<DOMFormDataIterator>(*thisObject, IterationKind::Values));
}

JSC_DEFINE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_values, (JSC::JSGlobalObject * lexicalGlobalObject, JSC::CallFrame* callFrame))
{
    return IDLOperation<JSDOMFormData>::call<jsDOMFormDataPrototypeFunction_valuesCaller>(*lexicalGlobalObject, *callFrame, "values");
}

static inline JSC::EncodedJSValue jsDOMFormDataPrototypeFunction_forEachCaller(JSGlobalObject* lexicalGlobalObject, CallFrame* callFrame, JSDOMFormData* thisObject)
{
    return JSValue::encode(iteratorForEach<DOMFormDataIterator>(*lexicalGlobalObject, *callFrame, *thisObject));
}

JSC_DEFINE_HOST_FUNCTION(jsDOMFormDataPrototypeFunction_forEach, (JSC::JSGlobalObject * lexicalGlobalObject, JSC::CallFrame* callFrame))
{
    return IDLOperation<JSDOMFormData>::call<jsDOMFormDataPrototypeFunction_forEachCaller>(*lexicalGlobalObject, *callFrame, "forEach");
}

JSC::JSValue getInternalProperties(JSC::VM& vm, JSGlobalObject* lexicalGlobalObject, JSDOMFormData* castedThis)
{
    auto throwScope = DECLARE_THROW_SCOPE(vm);

    auto& impl = castedThis->wrapped();
    size_t size = impl.count();
    JSObject* obj;
    if (size == 0) {
        obj = constructEmptyObject(lexicalGlobalObject);
        RETURN_IF_EXCEPTION(throwScope, {});
        RELEASE_AND_RETURN(throwScope, obj);
    } else if (size < JSFinalObject::maxInlineCapacity) {
        obj = constructEmptyObject(lexicalGlobalObject, lexicalGlobalObject->objectPrototype(), size + 1);
    } else {
        obj = constructEmptyObject(lexicalGlobalObject);
    }

    obj->putDirect(vm, vm.propertyNames->toStringTagSymbol, jsString(vm, String("FormData"_s)), PropertyAttribute::DontEnum | PropertyAttribute::ReadOnly);

    auto iter = impl.items();
    WTF::HashSet<String> seenKeys;

    auto toJSValue = [&](const DOMFormData::FormDataEntryValue& entry) -> JSValue {
        return toJS<IDLNullable<IDLUnion<IDLUSVString, IDLInterface<Blob>>>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, entry);
    };

    for (auto& entry : iter) {
        auto& key = entry.name;
        auto& value = entry.data;
        auto ident = Identifier::fromString(vm, key);
        if (seenKeys.contains(key)) {
            JSValue jsValue = obj->getDirect(vm, ident);
            if (jsValue.isString() || jsValue.inherits<JSBlob>()) {
                // Make sure this runs before the deferral scope is called.
                JSValue resultValue = toJSValue(value);
                ensureStillAliveHere(resultValue);

                JSC::JSArray* array = nullptr;

                {
                    GCDeferralContext deferralContext(lexicalGlobalObject->vm());
                    JSC::ObjectInitializationScope initializationScope(lexicalGlobalObject->vm());

                    array = JSC::JSArray::tryCreateUninitializedRestricted(
                        initializationScope, &deferralContext,
                        lexicalGlobalObject->arrayStructureForIndexingTypeDuringAllocation(JSC::ArrayWithContiguous),
                        2);
                    RELEASE_ASSERT(array);

                    array->initializeIndex(initializationScope, 0, jsValue);
                    array->initializeIndex(initializationScope, 1, resultValue);
                }

                obj->putDirect(vm, ident, array, 0);
            } else if (jsValue.isObject() && jsValue.getObject()->inherits<JSC::JSArray>()) {
                JSC::JSArray* array = jsCast<JSC::JSArray*>(jsValue.getObject());
                array->push(lexicalGlobalObject, toJSValue(value));
                RETURN_IF_EXCEPTION(throwScope, {});

            } else {
                RELEASE_ASSERT_NOT_REACHED();
            }
        } else {
            seenKeys.add(key);
            obj->putDirect(vm, ident, toJSValue(value), 0);
        }
    }

    RELEASE_AND_RETURN(throwScope, obj);
}

JSC::GCClient::IsoSubspace* JSDOMFormData::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSDOMFormData, UseCustomHeapCellType::No>(
        vm,
        [](auto& spaces) { return spaces.m_clientSubspaceForDOMFormData.get(); },
        [](auto& spaces, auto&& space) { spaces.m_clientSubspaceForDOMFormData = std::forward<decltype(space)>(space); },
        [](auto& spaces) { return spaces.m_subspaceForDOMFormData.get(); },
        [](auto& spaces, auto&& space) { spaces.m_subspaceForDOMFormData = std::forward<decltype(space)>(space); });
}

void JSDOMFormData::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSDOMFormData*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, makeString("url "_s, thisObject->scriptExecutionContext()->url().string()));
    Base::analyzeHeap(cell, analyzer);
}

bool JSDOMFormDataOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, AbstractSlotVisitor& visitor, ASCIILiteral* reason)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    UNUSED_PARAM(reason);
    return false;
}

void JSDOMFormDataOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsDOMFormData = static_cast<JSDOMFormData*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsDOMFormData->wrapped(), jsDOMFormData);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable : 4483)
extern "C" {
extern void (*const __identifier("??_7DOMFormData@WebCore@@6B@")[])();
}
#else
extern "C" {
extern void* _ZTVN7WebCore11DOMFormDataE[];
}
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::JSGlobalObject*, JSDOMGlobalObject* globalObject, Ref<DOMFormData>&& impl)
{

    if constexpr (std::is_polymorphic_v<DOMFormData>) {
#if ENABLE(BINDING_INTEGRITY)
        // const void* actualVTablePointer = getVTablePointer(impl.ptr());
#if PLATFORM(WIN)
        void* expectedVTablePointer = __identifier("??_7DOMFormData@WebCore@@6B@");
#else
        // void* expectedVTablePointer = &_ZTVN7WebCore11DOMFormDataE[2];
#endif

        // If you hit this assertion you either have a use after free bug, or
        // DOMFormData has subclasses. If DOMFormData has subclasses that get passed
        // to toJS() we currently require DOMFormData you to opt out of binding hardening
        // by adding the SkipVTableValidation attribute to the interface IDL definition
        // RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    }
    return createWrapper<DOMFormData>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::JSGlobalObject* lexicalGlobalObject, JSDOMGlobalObject* globalObject, DOMFormData& impl)
{
    return wrap(lexicalGlobalObject, globalObject, impl);
}

DOMFormData* JSDOMFormData::toWrapped(JSC::VM&, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSDOMFormData*>(value))
        return &wrapper->wrapped();
    return nullptr;
}
}
