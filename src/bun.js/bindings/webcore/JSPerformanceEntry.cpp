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
#include "JSPerformanceEntry.h"

#include "ActiveDOMObject.h"
#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertNumbers.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "ScriptExecutionContext.h"
#include "WebCoreJSClientData.h"
#include <JavaScriptCore/FunctionPrototype.h>
#include <JavaScriptCore/HeapAnalyzer.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/ObjectConstructor.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>

namespace WebCore {
using namespace JSC;

// Functions

static JSC_DECLARE_HOST_FUNCTION(jsPerformanceEntryPrototypeFunction_toJSON);

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceEntryConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceEntry_name);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceEntry_entryType);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceEntry_startTime);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceEntry_duration);

class JSPerformanceEntryPrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSPerformanceEntryPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSPerformanceEntryPrototype* ptr = new (NotNull, JSC::allocateCell<JSPerformanceEntryPrototype>(vm)) JSPerformanceEntryPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSPerformanceEntryPrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSPerformanceEntryPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSPerformanceEntryPrototype, JSPerformanceEntryPrototype::Base);

using JSPerformanceEntryDOMConstructor = JSDOMConstructorNotConstructable<JSPerformanceEntry>;

template<> const ClassInfo JSPerformanceEntryDOMConstructor::s_info = { "PerformanceEntry"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSPerformanceEntryDOMConstructor) };

template<> JSValue JSPerformanceEntryDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSPerformanceEntryDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "PerformanceEntry"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSPerformanceEntry::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

/* Hash table for prototype */

static const HashTableValue JSPerformanceEntryPrototypeTableValues[] = {
    { "constructor"_s, static_cast<unsigned>(PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceEntryConstructor, 0 } },
    { "name"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceEntry_name, 0 } },
    { "entryType"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceEntry_entryType, 0 } },
    { "startTime"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceEntry_startTime, 0 } },
    { "duration"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceEntry_duration, 0 } },
    { "toJSON"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformanceEntryPrototypeFunction_toJSON, 0 } },
};

const ClassInfo JSPerformanceEntryPrototype::s_info = { "PerformanceEntry"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSPerformanceEntryPrototype) };

void JSPerformanceEntryPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSPerformanceEntry::info(), JSPerformanceEntryPrototypeTableValues, *this);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSPerformanceEntry::s_info = { "PerformanceEntry"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSPerformanceEntry) };

JSPerformanceEntry::JSPerformanceEntry(Structure* structure, JSDOMGlobalObject& globalObject, Ref<PerformanceEntry>&& impl)
    : JSDOMWrapper<PerformanceEntry>(structure, globalObject, WTFMove(impl))
{
}

// static_assert(!std::is_base_of<ActiveDOMObject, PerformanceEntry>::value, "Interface is not marked as [ActiveDOMObject] even though implementation class subclasses ActiveDOMObject.");

JSObject* JSPerformanceEntry::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    auto* structure = JSPerformanceEntryPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype());
    structure->setMayBePrototype(true);
    return JSPerformanceEntryPrototype::create(vm, &globalObject, structure);
}

JSObject* JSPerformanceEntry::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSPerformanceEntry>(vm, globalObject);
}

JSValue JSPerformanceEntry::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSPerformanceEntryDOMConstructor, DOMConstructorID::PerformanceEntry>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSPerformanceEntry::destroy(JSC::JSCell* cell)
{
    JSPerformanceEntry* thisObject = static_cast<JSPerformanceEntry*>(cell);
    thisObject->JSPerformanceEntry::~JSPerformanceEntry();
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceEntryConstructor, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName))
{
    VM& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSPerformanceEntryPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSPerformanceEntry::getConstructor(JSC::getVM(lexicalGlobalObject), prototype->globalObject()));
}

static inline JSValue jsPerformanceEntry_nameGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceEntry& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDOMString>(lexicalGlobalObject, throwScope, impl.name())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceEntry_name, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceEntry>::get<jsPerformanceEntry_nameGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceEntry_entryTypeGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceEntry& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDOMString>(lexicalGlobalObject, throwScope, impl.entryType())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceEntry_entryType, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceEntry>::get<jsPerformanceEntry_entryTypeGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceEntry_startTimeGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceEntry& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.startTime())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceEntry_startTime, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceEntry>::get<jsPerformanceEntry_startTimeGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceEntry_durationGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceEntry& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.duration())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceEntry_duration, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceEntry>::get<jsPerformanceEntry_durationGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline EncodedJSValue jsPerformanceEntryPrototypeFunction_toJSONBody(JSGlobalObject* lexicalGlobalObject, CallFrame*, JSPerformanceEntry* castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    auto* result = constructEmptyObject(lexicalGlobalObject);
    auto nameValue = toJS<IDLDOMString>(*lexicalGlobalObject, throwScope, impl.name());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "name"_s), nameValue);
    auto entryTypeValue = toJS<IDLDOMString>(*lexicalGlobalObject, throwScope, impl.entryType());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "entryType"_s), entryTypeValue);
    auto startTimeValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.startTime());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "startTime"_s), startTimeValue);
    auto durationValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.duration());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "duration"_s), durationValue);
    return JSValue::encode(result);
}

JSC_DEFINE_HOST_FUNCTION(jsPerformanceEntryPrototypeFunction_toJSON, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSPerformanceEntry>::call<jsPerformanceEntryPrototypeFunction_toJSONBody>(*lexicalGlobalObject, *callFrame, "toJSON");
}

JSC::GCClient::IsoSubspace* JSPerformanceEntry::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSPerformanceEntry, UseCustomHeapCellType::No>(
        vm,
        [](auto& spaces) { return spaces.m_clientSubspaceForPerformanceEntry.get(); },
        [](auto& spaces, auto&& space) { spaces.m_clientSubspaceForPerformanceEntry = std::forward<decltype(space)>(space); },
        [](auto& spaces) { return spaces.m_subspaceForPerformanceEntry.get(); },
        [](auto& spaces, auto&& space) { spaces.m_subspaceForPerformanceEntry = std::forward<decltype(space)>(space); });
}

void JSPerformanceEntry::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSPerformanceEntry*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, makeString("url "_s, thisObject->scriptExecutionContext()->url().string()));
    Base::analyzeHeap(cell, analyzer);
}

bool JSPerformanceEntryOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, AbstractSlotVisitor& visitor, ASCIILiteral* reason)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    UNUSED_PARAM(reason);
    return false;
}

void JSPerformanceEntryOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsPerformanceEntry = static_cast<JSPerformanceEntry*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsPerformanceEntry->wrapped(), jsPerformanceEntry);
}

PerformanceEntry* JSPerformanceEntry::toWrapped(JSC::VM&, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSPerformanceEntry*>(value))
        return &wrapper->wrapped();
    return nullptr;
}

}
