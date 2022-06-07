cmake_minimum_required(VERSION 3.21)
project(fsoft2022_1B_5)

set(CMAKE_CXX_STANDARD 14)

set(PROJECT_HEADERS_DIR
        ${PROJECT_SOURCE_DIR}/headers)
set(PROJECT_SOURCES_DIR
        ${PROJECT_SOURCE_DIR}/sources)

set(PROJECT_MOCK_DIR ${PROJECT_SOURCE_DIR}/mock)
include_directories(
        ${PROJECT_MOCK_DIR})
set(MOCK_SOURCE_FILES
        ${PROJECT_MOCK_DIR}/MockData.h
        ${PROJECT_MOCK_DIR}/MockData.cpp)

set(PROJECT_HEADERS_CONTROLLERS_DIR
        ${PROJECT_HEADERS_DIR}/controllers)
set(PROJECT_SOURCES_CONTROLLERS_DIR
        ${PROJECT_SOURCES_DIR}/controllers)
include_directories(
        ${PROJECT_HEADERS_CONTROLLERS_DIR}
        ${PROJECT_SOURCES_CONTROLLERS_DIR})
set(CONTROLLERS_SOURCE_FILES
        ${PROJECT_HEADERS_CONTROLLERS_DIR}/controller.h
        ${PROJECT_SOURCES_CONTROLLERS_DIR}/controller.cpp)

set(PROJECT_HEADERS_EXCEPTIONS_DIR
        ${PROJECT_HEADERS_DIR}/exceptions)
set(PROJECT_SOURCES_EXCEPTIONS_DIR
        ${PROJECT_SOURCES_DIR}/exceptions)
include_directories(
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}
        ${PROJECT_SOURCES_EXCEPTIONS_DIR})

set(EXCEPTIONS_SOURCE_FILES
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/InformacaoNaoExisteException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/InformacaoNaoExisteException.cpp
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/InformacaoDuplicadaException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/InformacaoDuplicadaException.cpp
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/InformacaoInvalidaException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/InformacaoInvalidaException.cpp)

set(PROJECT_HEADERS_MODEL_DIR
        ${PROJECT_HEADERS_DIR}/model)
set(PROJECT_SOURCES_MODEL_DIR
        ${PROJECT_SOURCES_DIR}/model)
include_directories(
        ${PROJECT_HEADERS_MODEL_DIR}
        ${PROJECT_SOURCES_MODEL_DIR})
set(MODEL_SOURCE_FILES
        ${PROJECT_HEADERS_MODEL_DIR}/Administrador.h
        ${PROJECT_SOURCES_MODEL_DIR}/Administrador.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/AdministradorContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/AdministradorContainer.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Cliente.h
        ${PROJECT_SOURCES_MODEL_DIR}/Cliente.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/ClienteContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/ClienteContainer.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Funcionario.h
        ${PROJECT_SOURCES_MODEL_DIR}/Funcionario.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Nome.h
        ${PROJECT_SOURCES_MODEL_DIR}/Nome.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Produtos.h
        ${PROJECT_SOURCES_MODEL_DIR}/Produtos.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/ProdutosContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/ProdutosContainer.cpp
        )



set(PROJECT_HEADERS_VIEWS_DIR
        ${PROJECT_HEADERS_DIR}/views)
set(PROJECT_SOURCES_VIEWS_DIR
        ${PROJECT_SOURCES_DIR}/views)
include_directories(
        ${PROJECT_HEADERS_VIEWS_DIR}
        ${PROJECT_SOURCES_VIEWS_DIR})
set(VIEWS_SOURCE_FILES
        ${PROJECT_HEADERS_VIEWS_DIR}/Utils.h
        ${PROJECT_SOURCES_VIEWS_DIR}/Utils.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/View.h
        ${PROJECT_SOURCES_VIEWS_DIR}/View.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/StockView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/StockView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/ProdutosView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/ProdutosView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/FuncionarioView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/FuncionarioView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/ClienteView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/ClienteView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/AdministradorView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/AdministradorView.cpp)


add_executable(
        Gestao_Empresa
        main.cpp
        ${VIEWS_SOURCE_FILES}
        ${MODEL_SOURCE_FILES}
        ${EXCEPTIONS_SOURCE_FILES}
        ${CONTROLLERS_SOURCE_FILES}
        ${MOCK_SOURCE_FILES})

